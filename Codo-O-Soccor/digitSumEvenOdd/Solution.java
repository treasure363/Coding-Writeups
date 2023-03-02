import java.io.*;
import java.util.*;

// Read only region start
class UserMainCode
{
    public int EvenOddDigitsSum(int input1, String input2) {
        // Read only region end
        // Write code here...
        int ans = 0, d = 0;
        int flag = input2.equalsIgnoreCase("even")? 0: 1;
        while(input1 > 0) {
            d = input1 % 10;
            ans += (d%2 == flag)? d:0;
            input1 /= 10;
        }
        return ans;
    }
}