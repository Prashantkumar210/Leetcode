class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> fr(101);

        for (int i = 0; i < nums.size(); ++i) {
            fr[nums[i]]++;
            if(fr[nums[i]] > 2)
                return false;
        }

        return true;
    }
};