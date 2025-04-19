class Solution {
    public int findUpper(int nums[],int i, int tar){
        int start = i+1;
        int end = nums.length-1;
        int res =Integer.MAX_VALUE;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]<=tar){
                res = mid;
                start = mid+1;
            }else end = mid-1;
        }
           // System.out.println(res);
        return res;
    }
    public int findLower(int nums[],int i, int tar){
        int start = i+1;
        int end = nums.length-1;
        int res =Integer.MAX_VALUE;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>=tar){
                res = mid;
                end = mid-1;
            }else start = mid+1;
        }
        return res;
    }
    public long countFairPairs(int[] nums, int lower, int upper) {
        Arrays.sort(nums);
        long res =0;
        for(int i=0; i<nums.length; i++){
            int upperI = findUpper(nums,i,upper-nums[i]);
            int lowerI = findLower(nums,i,lower-nums[i]);
            // System.out.println(upperI+" "+lowerI);
            if(lowerI==Integer.MAX_VALUE || upperI==Integer.MAX_VALUE){
                continue;
            }
            else if(upperI>i && lowerI>0){
                res+=upperI-lowerI+1;
            }else if(upperI>i){
                res+=(upperI-i);
            }
        }
        return res;
    }
}