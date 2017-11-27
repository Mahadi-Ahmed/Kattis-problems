/*
	Open Kattis problem Oddities : https://open.kattis.com/problems/oddities
	Mahadi 27-11-17
*/

import java.util.Scanner;
import java.util.*;

public class Oddities {
	public static void main(String[] args) {
	    	Scanner sc = new Scanner(System.in);
	    	int i = 0;
	    	int[] oddOrEven = new int[sc.nextInt()];
	    	while(sc.hasNext()) {
	    		oddOrEven[i] = sc.nextInt();
	    		i++;
	    	}

	    	for (i = 0; i < oddOrEven.length ; i++ ) {
	    		if ( ((oddOrEven[i] % 2 + 2) % 2) == 0) {
	    			System.out.println(oddOrEven[i] + " is even");
	    		} else if ( ((oddOrEven[i] % 2 + 2) % 2) == 1) {
	    			System.out.println(oddOrEven[i] + " is odd");
	    		}
	    	}





	    }    
}
