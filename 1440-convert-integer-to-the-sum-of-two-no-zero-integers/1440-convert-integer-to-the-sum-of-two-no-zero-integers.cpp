class Solution {
public:
    bool non_zero(int num){
            while(num>0){
                int digit = num%10;
                if(digit==0) return false;
                num = num/10;
            }
        return true;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int second = n-i;
            if(non_zero(i) && non_zero(second)) return {i, second};
        }

        return {};
    }
};