/**
 * Open Kattis problem : https://open.kattis.com/problems/costumecontest
 * Mahadi 09-10-20
 */
import java.util.*;

class CostumeContest {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        String[] costumes = new String[size];

        HashMap<String,Integer> amountOfCostumes = new HashMap<String,Integer>();
        
        for (int i = 0; i < size; i++) {
            costumes[i] = sc.next();
        }

        for (int i = 0; i < costumes.length; i++) {
          if(amountOfCostumes.containsKey(costumes[i])) {
              int incrementValue = amountOfCostumes.get(costumes[i]) + 1;
              amountOfCostumes.put(costumes[i], incrementValue);
          }  else {
              amountOfCostumes.put(costumes[i], 1);
          }
        }
        
        // find min amount of costumes
        int min = size;

        for (String i : amountOfCostumes.keySet()) {
            if (amountOfCostumes.get(i) < min) {
                min = amountOfCostumes.get(i);
            }
        }
        System.out.println("min value key " + min);
        
        for (String i : amountOfCostumes.keySet()) {
            if (amountOfCostumes.get(i) == min) {
                System.out.println(i);
            }
        }
        
        
        //SortedSet<String> sortedCostumes = new TreeSet(amountOfCostumes.values());
        // System.out.println(Arrays.toString(amountOfCostumes.values().toArray()));
        // System.out.println("Sorted costumes: ");
        // //System.out.println(Arrays.asList(sortedCostumes)); 
        // Integer winner = Integer.parseInt(amountOfCostumes.values().toArray()[0].toString());
        // System.out.println("Check if there are similar values");
        // System.out.println(winner);
        // System.out.println(amountOfCostumes.containsValue(amountOfCostumes.values().toArray()[0]));
        // System.out.println(Arrays.asList(amountOfCostumes));

        // loop over evert item in map and print key value

        //System.out.println(Arrays.toString(costumes));

    }
}


/**
 * Take the key from the first in the sorted list to find if there are other possible solutions
 */