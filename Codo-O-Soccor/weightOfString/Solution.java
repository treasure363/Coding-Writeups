import java.io.*;
import java.util.*;

class UserMainCode {
    public int weightOfString(String input1, int input2) {
        int ans = 0;
        input1 = input1.toLowerCase();
        char ch;
        for(int i=0; i<input1.length(); i++) {
            ch = input1.charAt(i);
            if(Character.isAlphabetic(ch)) {
                if(input2==1)   ans += (int)(ch) - 96;
                else if(!isVowel(ch))    ans += (int)(ch) - 96;
            }
        }
        return ans;
    }
    public static boolean isVowel(char ch) {
        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':   return true;
            default: return false;
        }
    }
}