class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int le = 1; 
        int currentMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] >= currentMax) {
                le++;
                currentMax = nums[i]; 
            } else {
                currentMax = max(currentMax, nums[i]);
            }
        }

        return le;
    }
};