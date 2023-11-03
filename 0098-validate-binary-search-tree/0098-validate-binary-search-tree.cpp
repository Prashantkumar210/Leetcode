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