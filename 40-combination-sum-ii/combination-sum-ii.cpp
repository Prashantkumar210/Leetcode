class Solution {
public:

    void find(vector<int>& candidates, vector<vector<int>>&ans,
            vector<int>nums, int target, int index){

                if(target==0){

                    ans.push_back(nums);
                    return;
                }
                if(target<0){
                    return;
                }

                for(int i=index; i<candidates.size(); i++){

                    if(i-1 >= index && candidates[i-1] == candidates[i]){
                        continue;
                    }
                    nums.push_back(candidates[i]);

                    find(candidates, ans, nums, target-candidates[i], i+1);

                    nums.pop_back();
                }
            }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());

        int index = 0;
        vector<vector<int>>ans;

        vector<int>nums;

        find(candidates, ans, nums, target, index);

        // set<vector<int>>temp;

        // for(auto i:ans){
        //     temp.insert(i);
        // }

        // ans.clear();

        // for(auto i:temp){
        //     ans.push_back(i);
        // }
        return ans;
    }
};