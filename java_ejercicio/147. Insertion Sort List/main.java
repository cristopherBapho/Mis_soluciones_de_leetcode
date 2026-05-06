class Solution {
    public int reverse(int x) {
        int newNum1 =x, modulo=0, newNum=0;
        newNum = 0;
        while(newNum1 != 0){
            int temp = newNum * 10 + (newNum1 % 10);

            if(temp / 10 != newNum){return 0;}

            newNum = temp;
            newNum1 = newNum1 / 10; 
        }
       
        return newNum;
    }
}
public class main{
    public static void main(String[] args) {
        System.out.println(new Solution().reverse(123));
    }

    
}