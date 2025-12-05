class Solution {
public:
    int countPartitions(vector<int>& nums) {
        
        int i = 0, j = 1, count = 0, left = nums[0], right = 0;

        for(int k=1; k<nums.size(); k++){
            right += nums[k];
        }

        while(j<nums.size()){
            
            int diff = left - right;
            if(diff%2==0) ++count;
            i++;
            left += nums[i];
            right -= nums[j];
            j++;
        }

        return count;
    }
};