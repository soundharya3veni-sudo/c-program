class Solution {

    public String findLongestWord(String s, java.util.List<String> d) {

        int n = s.length();

        // next[i][c] = first position >= i where character c occurs
        // -1 if it doesn't occur
        int[][] next = new int[n + 1][26];

        // At the end, no character exists
        for (int c = 0; c < 26; c++) {
            next[n][c] = -1;
        }

        // Build next occurrence table
        for (int i = n - 1; i >= 0; i--) {

            for (int c = 0; c < 26; c++) {
                next[i][c] = next[i + 1][c];
            }

            next[i][s.charAt(i) - 'a'] = i;
        }

        String ans = "";

        for (String word : d) {

            if (word.length() < ans.length()) {
                continue;
            }

            if (word.length() == ans.length() &&
                word.compareTo(ans) >= 0) {
                continue;
            }

            if (isSubsequence(word, next, n)) {
                ans = word;
            }
        }

        return ans;
    }

    private boolean isSubsequence(String word, int[][] next, int n) {

        int pos = 0;

        for (int i = 0; i < word.length(); i++) {

            int ch = word.charAt(i) - 'a';

            if (pos > n) {
                return false;
            }

            int found = next[pos][ch];

            if (found == -1) {
                return false;
            }

            pos = found + 1;
        }

        return true;
    }
}
