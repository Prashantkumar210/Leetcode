class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        long long sum = 0;

        for(int i=0; i<nums.size()-1; i++){
            sum += nums[i];
        }

        int index = nums.size()-1;
        int i = index-1;
        bool check = false;

        while((sum<=nums[index]) && i>=2){
            sum -= nums[i];
            --i;
            --index;
        }

        if(sum>nums[index]) return sum+nums[index];

        return -1;
    }
};