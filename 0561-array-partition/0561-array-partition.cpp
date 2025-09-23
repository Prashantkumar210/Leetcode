class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int sum = 0;
        for(int i=1; i<nums.size(); i+=2){
            int mini = min(nums[i-1], nums[i]);
            sum += mini;
        }

        return sum;
    }
};