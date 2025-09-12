class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int i= 0;
        int j = 1;

        set<pair<int, int>>ans;

        while(i<nums.size() && j<nums.size()){
            if(abs(nums[i]-nums[j])==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(abs(nums[i]-nums[j])>k){
                i++;
                if(i==j) j++;
            }
            else{
                j++;
                if(i==j) j++;
            }
        }

        return ans.size();
    }
};