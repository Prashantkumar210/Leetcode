class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int mn = 1e9, i = 0, n = size(strs);
        for(string&e: strs) mn = min(mn,(int)size(e));
        while(i < mn){
            for(int j=1; j<n; ++j){
                if(strs[j][i] != strs[0][i]){
                    return ans;
                }
            }
            ans.push_back(strs[0][i++]);
        }
        return ans;
    }
};