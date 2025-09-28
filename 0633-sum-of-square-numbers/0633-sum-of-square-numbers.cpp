class Solution {
public:

    bool find(int first, int s, int e, int &c){

        int mid = s+(e-s)/2;

        while(s<=e){
            long long val = 1LL * first * first + 1LL * mid * mid;

            if(val == c){
                cout<<val<<endl;
                return true;
            }
            else if(val<c) s = mid+1;
            else e = mid-1;

            mid = s+(e-s)/2;
        }

        return false;
    }

    bool judgeSquareSum(int c) {
        
        if(c==0) return true;
        int last = sqrt(c);
        for(int i=0; i<=last; i++){

            bool ans = find(i, 0, last, c);
            if(ans) return true;
        }

        return false;
    }
};