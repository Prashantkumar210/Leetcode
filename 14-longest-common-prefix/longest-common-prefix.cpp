class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0) return strs[0];

        string s = strs[0];

        for(int i=1; i<strs.size(); i++){

            string temp = strs[i];

            int n = 0;
            int m = 0;

            string ans = "";

            while(temp[n] == s[m] && (n<temp.size() && m<s.size())){
                ans += temp[n];
                n++;
                m++;
            }

            if(ans.size()<s.size()){
                s = ans;
            }
        }

        return s;
    }
};