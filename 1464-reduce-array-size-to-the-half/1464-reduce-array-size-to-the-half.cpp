class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int, int>mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }

        vector<int>frequency;
        for(auto &p: mp){
            frequency.push_back(p.second);
        }

        sort(frequency.begin(), frequency.end());

        int ans = 0;
        int sum = 0;
        for(int i=frequency.size()-1; i>=0; i--){
            sum += frequency[i];
            ++ans;
            if(sum>=arr.size()/2) break;
        }
        return ans;
    }
};