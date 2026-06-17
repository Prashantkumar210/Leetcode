class Solution {
public:
    string processStr(string s) {

        string result = "";
        int i = 0;
        while(i<s.length()){
            
            if(s[i]=='*'){
                if(result.length()>0) result.pop_back();
            }
            else if(s[i]=='#'){
                result += result;
            }
            else if(s[i]=='%'){
                reverse(result.begin(), result.end());
            }
            else{
                result += s[i];
            }

            i++;
        }

        return result;
    }
};