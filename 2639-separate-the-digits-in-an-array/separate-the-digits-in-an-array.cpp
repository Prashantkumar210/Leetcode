class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            
            int num = nums[i];

            vector<int>temp;

            while(num>0){
                int digit = num%10;
                temp.push_back(digit);
                num /= 10; 
            }

            while(temp.size()>0){
                int n = temp.size()-1;
                ans.push_back(temp[n]);
                temp.pop_back();
            }
        }


        return ans;
    }
};