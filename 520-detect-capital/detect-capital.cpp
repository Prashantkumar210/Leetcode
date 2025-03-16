class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(word.length()==1) return true;

        bool first = true;
        bool second = true;
        bool third = true;
        int a = -1;

        for(int i=0; i<word.length(); i++){

            char  ch = word[i];
            
            // capital 
            if(islower(ch)){
                first = false;
            }

            // lower 
            if(isupper(ch)){
                second = false;
            }

            // only first capital 
            if(i>=1 && i<word.size()){
                
                if(isupper(ch)) third = false;
            }
        }
    
        return first || second || third;
    }
};