class Solution {
    public int largestInteger(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer, Integer> count = new HashMap<>();

        // Check every subarray of size k
        for (int i = 0; i <= n - k; i++) {
            HashSet<Integer> set = new HashSet<>();

            // Store unique elements in the current subarray
            for (int j = i; j < i + k; j++) {
                set.add(nums[j]);
            }

            // Increment the number of subarrays containing each element
            for (int x : set) {
                count.put(x, count.getOrDefault(x, 0) + 1);
            }
        }

        int ans = -1;
        for (int x : count.keySet()) {
            if (count.get(x) == 1) {
                ans = Math.max(ans, x);
            }
        }

        return ans;
    }
}
