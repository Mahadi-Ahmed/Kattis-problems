import java.util.Arrays;

/**
 * A variation of the Quicksort algorithm with a cut-off to insertion sort at 6.
 * the value 6 was arbitrarily chosen.
 * 
 * @author Mahadi Ahmed
 *
 */
public class QuicksortFixedPivotInsertion implements IntSorter {

	private int pivot;

	public QuicksortFixedPivotInsertion() {
		this.pivot = 0;
	}

	@Override
	public void sort(int[] v) {
		quickSort(v, 0, v.length - 1);
	}

	private void quickSort(int[] v, int low, int high) {
		if (high <= low + 6) {
			insertionSort(v, low, high);
			return;
		}
		this.pivot = partition(v, low, high);
		quickSort(v, low, this.pivot - 1); // V[i] < [pivot]
		quickSort(v, this.pivot + 1, high); // v[i] > v[pivot]
	}

	private int partition(int[] v, int low, int high) {
		this.pivot = v[high]; // last item
		int i = low - 1; // i is lower wall j is higher wall
		for (int j = low; j <= high - 1; j++) {
			if (v[j] <= this.pivot) {
				i += 1;
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
		int temp = v[i + 1];
		v[i + 1] = v[high];
		v[high] = temp;

		return i + 1;
	}

	private void insertionSort(int[] v, int low, int high) {
		for (int i = low + 1; i <= high; i++) {
			int j = i;
			while (j > low && v[j - 1] > v[j]) {
				int temp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = temp;
				j -= 1;
			}
		}
	}

	/**
	 * This method shows runtimes of this particular Quicksort Algorithm It
	 * shows the time it took to sort the array and also best and worst times.
	 * 
	 * @param n
	 *            length of the array.
	 * @param reps
	 *            Amount of times to run the quicksort algorithm
	 * @param order
	 *            the order of the array, RANDOM or r, ASCENDING or a ,
	 *            DESCENDING or d and EQUALS or e are the different orders
	 */
	public void runStats(int n, int reps, String order) {
		Stopwatch clock = new Stopwatch();
		float avarage = 0;
		long min = Long.MAX_VALUE;
		long max = -1;
		Data d = null;
		System.out.println("Length of array " + n + " With order " + order);
		for (int i = 0; i < reps + 1; i++) {

			if (order.equals("RANDOM") || order.equals("r")) {
				d = new Data(n, n, Data.Order.RANDOM);
			} else if (order.equals("ASCENDING") || order.equals("a")) {
				d = new Data(n, n, Data.Order.ASCENDING);
			} else if (order.equals("DESCENDING") || order.equals("d")) {
				d = new Data(n, n, Data.Order.DESCENDING);
			} else if (order.equals("EQUAL") || order.equals("e")) {
				d = new Data(n, 1, Data.Order.ASCENDING);
			} else {
				System.out.println(order + " : not a valid order! Valid inputs are:");
				System.out.println("RANDOM or r");
				System.out.println("ASCENDING or a");
				System.out.println("DESCENDING or d");
				System.out.println("EQUAL or e");
				return;
			}
			clock.reset().start();
			{
				sort(d.get());
			}

			if (i != 0) {
				long time = clock.stop().milliseconds();
				avarage += time;
				System.out.println("Time to run sort(): " + time + " ms");

				if (min > time) {
					min = time;
				}

				if (max < time) {
					max = time;
				}
			}
		}
		avarage = (float) avarage / (reps);
		System.out.println("Avarage time to run sort(): " + avarage + " ms");
		System.out.println("Max time: " + max + " ms");
		System.out.println("Min time: " + min + " ms");
	}

	public static void main(String[] args) {
		QuicksortFixedPivotInsertion t = new QuicksortFixedPivotInsertion();
		t.runStats(1000000, 10, "RANDOM");
	}

}
