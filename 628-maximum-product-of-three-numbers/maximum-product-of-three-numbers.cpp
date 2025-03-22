class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        // for max
        int A1 = INT_MIN;
        int B1 = INT_MIN;
        int C1 = INT_MIN;

        // for min
        int A2 = INT_MAX;
        int B2 = INT_MAX;


        for(int i=0; i<nums.size(); i++){
            
            // for max
            if(nums[i]>=A1){
                C1 = B1;
                B1 = A1;
                A1 = nums[i];
            }
            else if(nums[i]>=B1){
                C1 = B1;
                B1 = nums[i];
            }
            else if(nums[i]>=C1){
                C1 = nums[i];
            }

            // Foe Mini
            if(nums[i]<=A2){
                B2 = A2;
                A2 = nums[i];
            }
            else if(nums[i]<=B2){
                B2 = nums[i];
            }
        }

        return max(A1*B1*C1, A2*B2*A1);
    }
};