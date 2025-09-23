class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>mp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int maxi = 0;

        for(int i=1; i<nums.size(); i++){

            if(nums[i]-nums[i-1]==1){

                maxi = max(mp[nums[i]]+mp[nums[i-1]], maxi);
            }
        }

        return maxi;
    }
};