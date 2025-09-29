class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> freq(10, 0);
        for (char c : num) freq[c - '0']++;

        string left = "";
        for (int d = 9; d >= 0; --d) {
            int pairs = freq[d] / 2;
            if (pairs > 0) {
                if (d == 0 && left.empty()) {
                    continue;
                }
                left.append(pairs, char('0' + d));
                freq[d] -= pairs * 2;
            }
        }
        char mid = 0;
        for (int d = 9; d >= 0; --d) {
            if (freq[d] > 0) { 
                mid = char('0' + d);
                break;
            }
        }

        if (left.empty()) {
            if (mid != 0 && mid != '0') {
                return string(1, mid);
            }
            return "0";
        }
        int zeroPairs = freq[0] / 2;
        if (zeroPairs > 0) {
            left.append(zeroPairs, '0');
            freq[0] -= zeroPairs * 2;
        }
        string right = left;
        reverse(right.begin(), right.end());

        string ans = left;
        if (mid != 0) ans.push_back(mid);
        ans += right;
        return ans;
    }
};