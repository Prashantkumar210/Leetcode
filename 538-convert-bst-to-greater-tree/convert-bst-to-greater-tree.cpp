
class Solution {
public:
    void inorder(TreeNode* root, int& prev){
        if(root==NULL)return;
        inorder(root->right,prev);
        root->val+=prev;
        prev=root->val;
        inorder(root->left,prev);


  }
    TreeNode* convertBST(TreeNode* root) {
        int prev=0;
        inorder(root,prev);
        return root;
    }
};