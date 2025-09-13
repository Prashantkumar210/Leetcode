class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int>mp;

        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        int vowel_max = 0;
        int consonant_max = 0;

        for(int i=0; i<s.length(); i++){

            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                
                vowel_max = max(mp[s[i]], vowel_max);
            }
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                consonant_max = max(mp[s[i]], consonant_max);
            }  
        }

        return vowel_max + consonant_max;
    }
};