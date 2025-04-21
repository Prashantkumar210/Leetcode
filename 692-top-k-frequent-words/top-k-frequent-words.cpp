class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freqMap;
        for (auto num : words){
            freqMap[num]++;
        }
        vector<pair<string, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<string, int>&a, const pair<string, int>&b){
            if(a.second != b.second)
            return a.second > b.second; 
            return a.first < b.first; 
    });
        
        vector<string> result;
        for(int i=0; i<k; ++i) {
            result.push_back(freqVec[i].first);
        }

        return result;
    }
};