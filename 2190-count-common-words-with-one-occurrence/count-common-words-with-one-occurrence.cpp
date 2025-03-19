class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
       unordered_map<string, int> freq1, freq2;

        for(const string& word : words1) {
            freq1[word]++;
        }
        for(const string& word : words2) {
            freq2[word]++;
        }
    
        int count = 0;

        for(const auto& entry : freq1) {
            if(entry.second == 1 && freq2[entry.first] == 1) {
                count++;
            }
        }
    
        return count;
    }
};