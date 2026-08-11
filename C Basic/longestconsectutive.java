class Solution {
    public int longestConsecutive(int[] nums) {
        int ovLen = 0 , len = 0;
        Set<Integer> lcs = new HashSet<>();
        for(int each:nums) lcs.add(each);
        for(int each:lcs){
            if(!lcs.contains(each - 1)){
                len = 1;int next = each + 1;
                while(lcs.contains(next)){
                    len++;next++;
                }
                ovLen = Math.max(ovLen , len);
            }
        }
        return ovLen;
    }
}
