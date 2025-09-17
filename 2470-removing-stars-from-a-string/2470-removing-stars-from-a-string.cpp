class Solution {
public:
    string removeStars(string s) {
        
        int i = 0;
        while(i<s.length()){
            if(s[i+1]=='*'){
                s.erase(i, 2);
                --i;
                if(i<0) i = 0;
            }
            else{
                i++;
            }
        }

        return s;
    }
};