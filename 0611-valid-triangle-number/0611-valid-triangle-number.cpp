class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());

        for(int i=n; i>=2; i--){
            int j = 0;
            int k = i-1;
            while(j<k){

                if(nums[j]+nums[k]>nums[i]){
                    count += (k-j);
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        return count;
    }
};