class Solution {
public:
    int countOdds(int low, int high) {
        
        bool check1 = false;
        bool check2 = false;

        if(low%2==0) check1 = true;
        if(high%2==0) check2 = true;

        int ans = (high-low)/2;
        if(check1 && check2) return ans;
        else return ans+1;
    }
};