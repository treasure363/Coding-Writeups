import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static boolean prime(long n) {
        long i = 2;
        while(i * i <= n) {
            if(n % i == 0)  return false;
            i++;
        }
        return true;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        System.out.println(prime(n)?"yes":"no");
    }
}