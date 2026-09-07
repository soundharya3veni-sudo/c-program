import java.util.*;

class Solution {
    public int minCount(int[] arr) {
        int n = arr.length;

        int[][] dp = new int[n + 1][n + 1];

        for (int i = 0; i <= n; i++) {
            Arrays.fill(dp[i], -1);
        }

        dp[0][0] = 0;

        for (int pos = 0; pos < n; pos++) {
            int[][] next = new int[n + 1][n + 1];

            for (int i = 0; i <= n; i++) {
                Arrays.fill(next[i], -1);
            }

            for (int inc = 0; inc <= n; inc++) {
                for (int dec = 0; dec <= n; dec++) {

                    if (dp[inc][dec] == -1)
                        continue;

                    // Don't use current element
                    next[inc][dec] = Math.max(
                        next[inc][dec],
                        dp[inc][dec]
                    );

                    // Put current element in increasing subsequence
                    if (inc == 0 || arr[pos] > arr[inc - 1]) {
                        next[pos + 1][dec] = Math.max(
                            next[pos + 1][dec],
                            dp[inc][dec] + 1
                        );
                    }

                    // Put current element in decreasing subsequence
                    if (dec == 0 || arr[pos] < arr[dec - 1]) {
                        next[inc][pos + 1] = Math.max(
                            next[inc][pos + 1],
                            dp[inc][dec] + 1
                        );
                    }
                }
            }

            dp = next;
        }

        int maxSelected = 0;

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                maxSelected = Math.max(maxSelected, dp[i][j]);
            }
        }

        return n - maxSelected;
    }
}
