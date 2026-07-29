class Solution {
    public int maxSubArray(int[] arr) {
        int msum=arr[0],csum=arr[0];
        for(int index=1;index<arr.length;index++){
            csum=Math.max(arr[index],arr[index]+csum);
            msum=Math.max(csum,msum);
        }
        return msum;
    }
}
