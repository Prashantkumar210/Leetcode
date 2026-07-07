class Solution {
public:
    long long sumAndMultiply(int n) {
        
        long long num = 0;

        while(n>0){
            int temp = n%10;
            if(temp!=0){
                num = num*10 + temp;
            }
            n = n/10;
        }

        long long ans = 0;
        int digitsum = 0;

        while(num>0){
            int temp = num%10;
            ans = ans*10 + temp;
            digitsum += temp;
            num = num/10;
        }

        ans = ans*digitsum;
        return ans;
    }
};