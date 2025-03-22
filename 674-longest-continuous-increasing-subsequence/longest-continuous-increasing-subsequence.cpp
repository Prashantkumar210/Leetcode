class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if(nums.size()==1) return 1;

        int count = 1;

        int temp = 1;

        for(int i=0; i<nums.size()-1; i++){

            if(nums[i]<nums[i+1]){
                ++temp;

                count = max(temp, count);
            }
            else{
                temp = 1;
            }
        }

        return count;
    }
};