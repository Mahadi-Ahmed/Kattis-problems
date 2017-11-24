/*
  Open Kattis problem F2
  Mahadi 24-11-17
*/
import java.util.Scanner;

public class R2 {

    public static void main(String[] args) {
        double[] numbers = new double[2];
        Scanner sc = new Scanner(System.in);
        int i = 0;
        while (sc.hasNext()){
            numbers[i] = sc.nextDouble();
            i++;
         }

        double R1 = numbers[0];
        double S1 = numbers[1];
        int R2 = (int)((2*S1) - (R1));
        System.out.println(R2);

    }
}
