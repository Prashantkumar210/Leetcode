class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;
        
        auto addWords = [&](string &s) {
            string temp = "";
            for (int i = 0; i <= s.size(); i++) {
                if (i == s.size() || s[i] == ' ') {
                    if (!temp.empty()) {
                        freq[temp]++;
                        temp = "";
                    }
                } else {
                    temp += s[i];
                }
            }
        };

        addWords(s1);
        addWords(s2);

        vector<string> ans;
        for (auto &p : freq) {
            if (p.second == 1) ans.push_back(p.first);
        }

        return ans;
    }
};
