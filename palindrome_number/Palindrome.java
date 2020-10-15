import java.util.*;
class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        }
        int copy = x;
        Stack<Integer> reversed = new Stack<Integer>();
        ArrayList<Integer> array = new ArrayList<Integer>();
        
        int temp = 0;
        while(copy > 0) {
            temp = copy % 10;
            reversed.push(temp);
            array.add(temp);
            copy /= 10;
        }
        
        boolean result = false;
        for(int i = 0; i < array.size(); i++) {
            if(array.get(i) == reversed.pop()) {
                result = true;
            } else {
                return false;
            }
        }
        return result;
    }
}