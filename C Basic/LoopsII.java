import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int q = sc.nextInt();

        while (q-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();

            int sum = a;
            int power = 1;

            for (int i = 0; i < n; i++) {
                sum += power * b;
                System.out.print(sum);

                if (i != n - 1) {
                    System.out.print(" ");
                }

                power *= 2;
            }
            System.out.println();
        }

        sc.close();
    }
}
