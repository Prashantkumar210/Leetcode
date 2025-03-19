class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int>mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }

        vector<int>nums;

        for(auto it=mp.begin(); it!=mp.end(); ++it){

            nums.push_back(it->second);
        }

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){

            if(nums[i]==nums[i+1]) return false;
        }

        return true;
    }
};