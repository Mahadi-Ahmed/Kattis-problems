import java.util.Arrays;

/**
 * An implementation of IntSorter as Warmup exercise This class uses the
 * Insertion sort algorithm to sort an array of ints
 * 
 * @author Mahadi Ahmed
 *
 */
public class InsertionSort implements IntSorter {

	@Override
	public void sort(int[] v) {
		for (int i = 0; i < v.length; i++) {
			int j = i;
			while (j > 0 && v[j - 1] > v[j]) {
				int temp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = temp;
				j -= 1;
			}
		}

	}

	public int[] copyData(Data d) {
		int[] array = new int[d.get().length];
		for (int i = 0; i < array.length; i++) {
			array[i] = d.get()[i];
		}
		return array;
	}

	public static void main(String[] args) {
		
		InsertionSort sorter = new InsertionSort();
		Data array = new Data(20,20,Data.Order.RANDOM);
		System.out.println("Array to be ordered");
		System.out.println(Arrays.toString(array.get())+"\n");
		
		Stopwatch watch = new Stopwatch();
		// copy to a int[] array so it can be used
		int[] list = sorter.copyData(array);
		
		//sort & time it
		watch.start();
		sorter.sort(list);
		long time = watch.stop().nanoseconds();
		System.out.println("Sorted list: ");
		System.out.println(Arrays.toString(list));
		System.out.println("It took " + time + "ns to sort the list.");
		
	}

}
