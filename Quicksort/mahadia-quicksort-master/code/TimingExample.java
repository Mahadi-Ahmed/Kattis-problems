/**
 * An example demonstrating the effects of just-in-time compilation on time
 * measurements.
 *
 * @author Mahadi Ahmed
 * @version 2016-03-09
 */
public final class TimingExample {
    /**
     * If you're using a JVM with just-in-time compilation, chanses are that the
     * first reported time is much larger than the rest: during most of the
     * first invocation of the sum() method, the code has yet to be compiled and
     * optimized.
     */
    public static void main(String[] args) {
        final int reps = 21;
        final int n = 1000000;
        final Stopwatch clock = new Stopwatch();
        float avarage = 0;
        long min = 99999999; // arbitrary big place holder number
        long max = -1;

        for (int i = 0; i < reps; i++) {

            clock.reset().start();
            {
                long dummy = sum(n);
            }
            if (i != 0) {
                long time = clock.stop().milliseconds();
                avarage += time;
                System.out.printf("Time to run sum(%d): %d ms%n", n, time);
                
                if (min > time) {
                    min = time;
                }
                
                if ( max < time) {
                    max = time;
                }
            } 
        }
        
        avarage =(float)avarage / (reps - 1);
        System.out.println("Avarage time to run sum(1000000): " + avarage + " ms" );
        System.out.println("max time : " + max);
        System.out.println("min time : " + min);
    }

    /**
     * Returns the sum 1 + 2 + ... + n.
     */
    private static long sum(int n) {
        long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
}
