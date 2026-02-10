/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void travel(TreeNode* root, vector<int>&nums){
        if(!root) return;

        travel(root->left, nums);
        nums.push_back(root->val);
        travel(root->right, nums);
    }

    TreeNode* tree(vector<int>&nums, int s, int e){

        if(s>e) return NULL;
        int mid = s +(e-s)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = tree(nums, s, mid-1);
        root->right = tree(nums, mid+1, e);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nums;

        travel(root, nums);

        return tree(nums, 0, nums.size()-1);
    }
};