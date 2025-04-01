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

    void find(TreeNode* root, int &targetSum, int &currsum, int &ans){

       if(!root) return;

       if(!root->left && !root->right){

            currsum += root->val;
            if(currsum == targetSum){
                ans = 1; 
            }
            currsum -= root->val;
            return;
       }

        currsum += root->val; 

        find(root->left, targetSum, currsum, ans);
        find(root->right, targetSum, currsum, ans);

        currsum -= root->val;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {

        int currsum = 0;
        int ans = -1;
        find(root, targetSum, currsum, ans);

        if(ans == 1) return true;
        return false;
    }
};