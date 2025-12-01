class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
        vector<int>nums;
        int count = 0;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        sort(nums.begin(), nums.end());

        while(nums[1]!=0){
            
            ++count;
            nums[1]--;
            nums[2]--;
            sort(nums.begin(), nums.end());
        }   

        return count;
    }
};