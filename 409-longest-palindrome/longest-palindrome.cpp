class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int>mp;

        int check = false;

        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }

        int count = 0;

        for(auto it=mp.begin(); it!=mp.end(); ++it){

            if(it->second%2==0){
                count += it->second;
            }
            else{

                count += it->second-1;
                check = true;
            }
        }

        if(check==true) return count+1;

        return count;
    }
};