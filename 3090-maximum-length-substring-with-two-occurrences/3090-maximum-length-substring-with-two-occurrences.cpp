class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int, char>mp;

        int ans = 0;
        int l = 0;
        int r = 0;

        while(r<s.length()){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }

        return ans;
    }
};