class Solution {
public:
    int reverse(int x) {
        
        int rem;
        int ans = 0;

        while(x!=0){

            if(ans<INT_MIN/10 || ans>INT_MAX/10){
                return 0;
            }

            rem = x % 10;
            x = x/10;
            ans = ans * 10 + rem ;
        }

        return ans;
    }
};