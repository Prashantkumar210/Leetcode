class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
               int end=i;
              int start=0;
               while(start<end){
               char t=word[start];
                word[start]=word[end];
                word[end]=t;
                end--;
                start++;
               }
              return word;
            }
        }
        return word;
    }
};