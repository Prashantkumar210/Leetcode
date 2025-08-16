class Solution {
public:
    int divide(int dividend, int divisor) {
        
       if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        long long start = 0, end = a, ans = -1;

        long long mid = start+(end - start)/2;

        while(start<=end){

            if(mid*b == a){
                ans = mid;
                break;
            }
            else if(mid*b<a){

                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            mid = start+ (end-start)/2 ;
        }

       return (int)ans*sign;
    }
};