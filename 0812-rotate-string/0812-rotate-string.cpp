class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if (s.length() != goal.length()) return false;
        string douSt = s + s;
        return douSt.find(goal) < douSt.length();
    }
};