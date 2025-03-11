class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int sum=0;

        for(int i=0;i<31;i++){
            int count=0;
            for(auto j:nums){
                if(j & (1<<i)) count++; 
            }
            if(count>=k) sum+=pow(2,i); 
        }
        return sum;
    }
};