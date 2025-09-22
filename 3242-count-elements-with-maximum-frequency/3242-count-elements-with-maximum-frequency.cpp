class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int maxi_freq = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi_freq = max(maxi_freq, mp[nums[i]]);
        }

        if(maxi_freq==1) return nums.size();
        int count = 0;
         for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] == maxi_freq) count++;
        }
    
        return count;
    }
};