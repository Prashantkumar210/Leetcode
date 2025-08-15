class Solution {
public:
    string largestOddNumber(string num) {
        
        string ans = "";
        string temp = "";

        for(int i=num.length()-1; i>=0; i--){
            int number = num[i]-'0';
            if(ans.size()==0 && number%2!=0) ans += num[i];
            else{
                if(ans.size()!=0) ans += num[i];
            }         
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};