class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();
        if(n==1) return "";
        bool check = false;
        for(int i=0; i<n; i++){
            if(palindrome[i]!='a' && i!=n/2){
                palindrome[i] = 'a';
                check = true;
                break;
            }
        }

        if(!check) palindrome[palindrome.length()-1] = 'b';

        return palindrome;
    }
};