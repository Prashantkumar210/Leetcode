class Solution {
public:
    int maxPower(string s) {
        
        if(s.length()==1) return 1;

        int count = 1;
        int ans = 0;

        for(int i=1; i<s.length(); i++){
            
            if(s[i]==s[i-1]){
                ++count;
            }
            else{
                ans = max(ans, count);
                count = 1;
            }
        }

        return max(ans, count);
    }
};