class Solution {
public:
    string greatestLetter(string s) {
        bool lower[26] = {false};
        bool upper[26] = {false};

        for (auto ch : s) {
            if (ch >= 'a' && ch <= 'z') lower[ch - 'a'] = true;
            if (ch >= 'A' && ch <= 'Z') upper[ch - 'A'] = true;
        }

        for (int i = 25; i >= 0; i--) {
            if (lower[i] && upper[i]) {
                string ans = "";
                ans += ('A' + i);
                return ans;
            }
        }

        return "";
    }
};
