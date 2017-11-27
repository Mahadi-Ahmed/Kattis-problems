/*
Open Kattis problem Stuck in a time loop: https://open.kattis.com/problems/timeloop
Mahadi Ahmed 27-11-17
* */
public class timeloop {
  public static void main(String[] args) {
    Kattio kattio = new Kattio(System.in,System.out);
    int n = kattio.getInt();
    String abra = " Abracadabra";
    for (int i = 1; i < n + 1; i++) {
      System.out.println(i + abra);
    }
  }
}
