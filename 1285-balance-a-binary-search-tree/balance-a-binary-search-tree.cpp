class Solution {
public:
    void Inoreder(TreeNode* root, vector<int>&nums){
        if(!root) return;

        Inoreder(root->left, nums);
        nums.push_back(root->val);
        Inoreder(root->right, nums);
    }

    TreeNode* BuildTree(vector<int>&nums, int s, int e){

        if(s>e) return NULL;
        int mid = s +(e-s)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = BuildTree(nums, s, mid-1);
        root->right = BuildTree(nums, mid+1, e);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nums;

        Inoreder(root, nums);
        return BuildTree(nums, 0, nums.size()-1);
    }
};