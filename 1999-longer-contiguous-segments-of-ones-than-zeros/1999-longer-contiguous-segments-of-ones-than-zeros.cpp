class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int ones = 0;
        int maxone = 0;

        int zero = 0;
        int maxzeros = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                ones++;
            }
            else{
                maxone = max(maxone, ones);
                ones = 0;
            }

            if(s[i]=='0'){
                zero++;
            }
            else{
                maxzeros = max(zero, maxzeros);
                zero = 0;
            }
        }
        maxone = max(maxone, ones);
        maxzeros = max(zero, maxzeros);

        if( maxone> maxzeros) return true;

        return false;
    }
};