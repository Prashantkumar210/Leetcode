class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        bool numSeen = false;
        bool dotSeen = false;
        bool eSeen = false;
        bool numAfterE = true;

        for(int i = 0; i < n; i++) {
            char ch = s[i];

            if(isdigit(ch)) {
                numSeen = true;
                if(eSeen) numAfterE = true;
            }
            else if(ch == '+' || ch == '-') {
                // Sign can appear at start or after 'e'
                if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E') return false;
            }
            else if(ch == '.') {
                if(dotSeen || eSeen) return false; // Only one dot before e
                dotSeen = true;
            }
            else if(ch == 'e' || ch == 'E') {
                if(eSeen || !numSeen) return false; // Must have number before e
                eSeen = true;
                numAfterE = false; // Must have number after e
            }
            else {
                return false; // Invalid character
            }
        }

        return numSeen && numAfterE;
    }
};
