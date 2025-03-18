class Solution {
public:
    int getLucky(string s, int k) {
        
        string sum = "";

        for(int i=0; i<s.length(); i++){

            char ch = s[i];
            int val = ch-'a'+1;

            sum += to_string(val);
        }

        for(int i=0; i<k; i++){

            long long temp = 0;

            int j = 0;
            
        
            while(j<sum.length()){
               
               char ch = sum[j];

               temp += ch-'0';
               ++j;
            }
            
            sum = to_string(temp);
        }

        return stoi(sum);
    }
};