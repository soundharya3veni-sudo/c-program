class Solution {
    public int findMax(int n) {
        int ans = n;
        int maxSum = digitSum(n);

        int temp = n;
        int place = 1;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit > 0) {
                int candidate = (n / (place * 10)) * (place * 10)
                              + (digit - 1) * place
                              + (place - 1);

                int sum = digitSum(candidate);

                if (sum > maxSum || (sum == maxSum && candidate > ans)) {
                    maxSum = sum;
                    ans = candidate;
                }
            }

            temp /= 10;
            place *= 10;
        }

        return ans;
    }

    private int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }
}
