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
    int findBottomLeftValue(TreeNode* root) {
        if (!root) return 0;
        dfs(root,1);
        return res;
    }
    void dfs(TreeNode* root, int depth) {
        if (!root) return ;
        depth++;
        if (!root->left && !root->right) {
            if (depth > maxVal) {
                maxVal = depth;
                res = root->val;
            }
        }
        dfs(root->left, depth);
        dfs(root->right, depth);
    }
    int maxVal = 0;
    int res = 0;
};