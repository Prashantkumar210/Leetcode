class Solution {
public:
    int numberOfSpecialChars(string word) {

        int lower[26] ={false};
        int upper[26] ={false};

        for(auto ch: word){
            if(ch>='a'&& ch<='z') lower[ch-'a'] = true;
        }
        for(auto ch: word){
            if(ch>='A'&& ch<='Z') upper[ch-'A'] = true;
        }
        
        int count = 0;
        for(int i=0; i<26; i++){
            if(lower[i] && upper[i]) count++;
        }

        return count;
    }
};