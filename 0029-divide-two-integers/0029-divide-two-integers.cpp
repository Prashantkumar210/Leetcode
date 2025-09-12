class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;

        long long divi = llabs((long long)dividend);
        long long divsor = llabs((long long)divisor);

        long long s = 0;
        long long e = divi;
        long long mid = s +(e-s)/2;
        long long ans = 0;

        while(s<=e){

            if(mid*divsor==divi){
                ans = mid;
                break;
            }
            else if(mid*divsor<divi){
                ans = mid;
                s = mid +1;
            }
            else e = mid-1;

            mid = s +(e-s)/2;
        }
        if((dividend<0 && divisor<0) ||(dividend>0 && divisor>0)) return int(ans);
        ans = (-1)*ans;
        return (int)ans;
    }
};