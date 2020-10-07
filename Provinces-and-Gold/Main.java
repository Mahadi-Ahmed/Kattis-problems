/*
  Open Kattis problem Provinces and gold : https://open.kattis.com/problems/provincesandgold
  Mahadi 07-19-20
*/

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int g = sc.nextInt();
    int s = sc.nextInt();
    int c = sc.nextInt();

    // count how much buying power i have
    int bp = (g*3) + (s*2) + (c*1);
    //System.out.println("bp: " + bp);


    // what can jake buy?
    if (bp >= 8) {
      System.out.println("Province or Gold");
    } else if (bp >= 6) {
      System.out.println("Duchy or Gold");
    } else if (bp == 5) {
      System.out.println("Duchy or Silver");
    } else if (bp >= 3) {
      System.out.println("Estate or Silver");
    } else if (bp == 2) {
      System.out.println("Estate or Copper");
    } else if (bp < 2) {
      System.out.println("Copper");
    } 

  }
}

/*
Province (costs 8, worth 6 victory points)

Duchy (costs 5, worth 3 victory points)

Estate (costs 2, worth 1 victory point)


Gold (costs 6, worth 3 buying power)

Silver (costs 3, worth 2 buying power)

Copper (costs 0, worth 1 buying power)
*/




