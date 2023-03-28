import java.io.*;
import java.util.*;

class prime {
    boolean isPrime(int n) {
        if (n == 1 || n == 0) {
            return false;
        }
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    void checkPrime(int... arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print((isPrime(arr[i])) ? arr[i] + " " : "");
        }
        System.out.println();
    }

}

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }
        prime p = new prime();
        p.checkPrime(arr[0]);
        p.checkPrime(arr[0], arr[1]);
        p.checkPrime(arr[0], arr[1], arr[2]);
        p.checkPrime(arr[0], arr[1], arr[2], arr[3], arr[4]);

    }
}
