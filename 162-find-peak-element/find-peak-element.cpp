class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1) return 0;

        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;

        int s = 1;
        int e = nums.size()-2;

        while(s<=e){
            
            int mid = s + (e-s)/2;

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;

            else if(nums[mid]<nums[mid+1]) s = mid+1;
            
            else  e = mid -1;
        }

        return -1;
    }
};