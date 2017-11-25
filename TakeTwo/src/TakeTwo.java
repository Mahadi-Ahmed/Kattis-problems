/*
* Open Kattis problem Take Two
* Mahadi 25-11-17
* */

import java.util.Scanner;

public class TakeTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int stones = sc.nextInt();
        //System.out.println("This is the amount of stones to play with " + stones);
        if (stones % 2 == 0) {
            System.out.println("Bob");
        } else if (stones % 2 == 1){
            System.out.print("Alice");
        }
    }
}
