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

    int max_diameter(TreeNode* root){

        if(root == NULL) return 0;

        int left = max_diameter(root->left);
        int right = max_diameter(root->right);

        int ans =max(left, right)+1;
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL) return 0;

        int left = diameterOfBinaryTree(root->left);

        int right = diameterOfBinaryTree(root->right);

        int allmax = max_diameter(root->left) + max_diameter(root->right);

        int ans = max(left, max(right, allmax));

        return ans;
    }
};