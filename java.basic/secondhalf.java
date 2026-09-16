import java.util.*;

class Solution {
    public int dominantPairs(int[] arr) {
        int n = arr.length / 2;

        // Copy and sort the second half
        int[] secondHalf = new int[n];

        for (int i = 0; i < n; i++) {
            secondHalf[i] = arr[n + i];
        }

        Arrays.sort(secondHalf);

        long count = 0;

        // For every element in first half
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n;

            // Find first position where 5 * secondHalf[pos] > arr[i]
            while (left < right) {
                int mid = left + (right - left) / 2;

                if (5L * secondHalf[mid] <= arr[i]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            // All elements before 'left' are valid
            count += left;
        }

        return (int) count;
    }
}
