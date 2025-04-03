class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        long long ans = 0;

        for(int i=2; i<nums.size(); i++){

            int ithmaxi = nums[0];

            for(int j=1; j<i; j++){

                ans = max(ans, (long long)(ithmaxi-nums[j])*nums[i]);

                ithmaxi =  max(ithmaxi, nums[j]);
            }  
        }

        return ans;
    }
};