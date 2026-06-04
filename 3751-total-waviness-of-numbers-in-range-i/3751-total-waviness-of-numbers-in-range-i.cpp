class Solution {
public:
    int totalWaviness(int num1, int num2) {
    
        int count = 0;
        for(int i=num1; i<=num2; i++){

            int num = i;

            string str = to_string(i);

            for(int i=1; i<str.length()-1; i++){
                if(str[i]>str[i-1] && str[i]>str[i+1]) ++count;
                if(str[i]<str[i-1] && str[i]<str[i+1]) ++count;
            }
        }

        return count;
    }
};