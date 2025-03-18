class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        vector<vector<int>>arr;
        int maxlen = 1;
        
        for(int i=0; i<nums.size(); i++){

            int templen = 1;

            int a = nums[i];

            for(int j=i+1; j<nums.size(); j++){
                
                if((a & nums[j])==0){

                    a |= nums[j];
                    templen += 1;

                    maxlen = max(templen, maxlen); 
                }
                else{
                    break;
                }
            }
        }

        return maxlen;
    }
};