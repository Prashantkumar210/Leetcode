class Solution {
public:
    int alternateDigitSum(int n) {
        
        int len = 0;

        int num = n;

        while(num>0){
            ++len;
            num /= 10;
        }


        int sum = 0;

        while(n>0){

            int digit = n%10;

            if(len%2!=0){
                sum += digit;
            }
            else{
                sum -= digit;
            }
            --len;
            n /= 10; 
        }
        
        return sum;
    }
};