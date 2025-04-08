class Solution {
public:

    void find(TreeNode* root, vector<int>&nums){

        if(root==NULL) return;

        find(root->left, nums);
        nums.push_back(root->val);
        find(root->right, nums);

    }

    bool isValidBST(TreeNode* root) {
        
        vector<int>nums;

        find(root, nums);

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]) return false;
        }

        return true;
    }
};