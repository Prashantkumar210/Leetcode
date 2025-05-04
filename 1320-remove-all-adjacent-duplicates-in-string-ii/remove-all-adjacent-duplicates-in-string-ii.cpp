class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.top().first == s[i]){
                st.top().second += 1;
                if(st.top().second == k)
                    st.pop();
            }
            else
                st.push({s[i],1});
        }

        string ans = "";
        while(!st.empty()){
            ans.append(st.top().second, st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};