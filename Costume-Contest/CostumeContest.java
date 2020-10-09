/**
 * Open Kattis problem : https://open.kattis.com/problems/costumecontest
 * Mahadi 09-10-20
 */
import java.util.*;

class CostumeContest {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        HashMap<String,Integer> amountOfCostumes = new HashMap<String,Integer>();

        for (int i = 0; i < size; i++) {
            String costume = sc.next();
            if (amountOfCostumes.containsKey(costume)){
                int incrementValue = amountOfCostumes.get(costume) + 1;
                amountOfCostumes.put(costume, incrementValue);
            } else {
                amountOfCostumes.put(costume, 1);
            }
        }
        
        // find min amount of costumes
        int min = size;

        for (String i : amountOfCostumes.keySet()) {
            if (amountOfCostumes.get(i) < min) {
                min = amountOfCostumes.get(i);
            }
        }
        
        TreeSet<String> sortedCostumes = new TreeSet<String>();
        // find winnning costume and order them
        for (String i : amountOfCostumes.keySet()) {
            if (amountOfCostumes.get(i) == min) {
                sortedCostumes.add(i);
            }
        }

        for (String i : sortedCostumes) {
            System.out.println(i);
        }
    }
}


/**
 * Take the key from the first in the sorted list to find if there are other possible solutions
 */