class Solution {
public:
    bool checkOnesSegment(string s) {

        if(s.length()==1) return true;
        bool ones = false;
        bool zero = false;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1' && (ones && zero)) return false;
            if(s[i]=='1') ones = true;
            if(s[i]=='0') zero = true;
        }

        return true;
    }
};