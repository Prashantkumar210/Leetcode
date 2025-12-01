class Solution {
public:
    int fillCups(vector<int>& amount) {

        int sum = 0;
        int maxi = 0;

        for(int i=0; i<amount.size(); i++){

            sum += amount[i];
            maxi = max(maxi, amount[i]);
        }   

        return max(maxi, (sum+1)/2);
    }
};