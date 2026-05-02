class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==0){return 0;}
        int caracteresLong = 0;
        String nuevo = "";
        int n=0;
        char letra;
        letra = s.charAt(0);
        while(n < s.length() ){
            letra = s.charAt(n);
            if(nuevo.indexOf(letra) !=-1 ){
                caracteresLong = Math.max(caracteresLong,nuevo.length());
                nuevo = nuevo.substring(nuevo.indexOf(letra)+1);
            }
            nuevo+=letra;
            n++;
        }
        caracteresLong = Math.max(caracteresLong, nuevo.length());
        return caracteresLong;
    }

