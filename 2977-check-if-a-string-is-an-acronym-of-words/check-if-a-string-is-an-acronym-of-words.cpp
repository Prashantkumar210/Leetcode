class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        for(int i=0; i<words.size(); i++){

            string ch = words[i];
            if(s.length()==0) return false;
            if(ch[0]==s[0]){
                s.erase(0, 1);
            }

        }

        if(s.length()>0) return false;

        return true;
    }
};