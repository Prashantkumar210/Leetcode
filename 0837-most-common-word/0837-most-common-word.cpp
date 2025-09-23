class Solution {
public:
    string mostCommonWord(string para, vector<string>& banned) {
        unordered_map<string, int> mp;
        unordered_set<string> ban(banned.begin(), banned.end());

        string temp = "";
        for (int i = 0; i < para.length(); i++) {
            char c = para[i];
            
            if (isalpha(c)) {
                temp += tolower(c);
            } else {
                if (!temp.empty()) {
                    if (ban.find(temp) == ban.end()) {
                        mp[temp]++;
                    }
                    temp = "";
                }
            }
        }
        
        if (!temp.empty() && ban.find(temp) == ban.end()) {
            mp[temp]++;
        }

        int maxi = 0;
        string ans = "";
        for (auto &it : mp) {
            if (it.second > maxi) {
                ans = it.first;
                maxi = it.second;
            }
        }

        return ans;
    }
};
