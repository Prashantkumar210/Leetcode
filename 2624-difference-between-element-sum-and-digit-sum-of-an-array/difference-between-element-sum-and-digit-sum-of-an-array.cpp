class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elementsum = 0;
        int digitsum = 0;

        for(int i=0; i<nums.size(); i++){

            elementsum += nums[i];

            int num = nums[i];
            while(num>0){

                int digit = num%10;
                digitsum += digit;

                num = num/10; 
            } 
        }

        return abs(elementsum-digitsum);
    }
};