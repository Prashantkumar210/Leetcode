class Solution {
public:

    void insertInBST(TreeNode* root, int val){
        if(root==NULL) return;
        if(root->val>val){
            if(root->left==NULL){
                TreeNode* node = new TreeNode(val);
                root->left = node;
            }
            else insertInBST(root->left, val);
        }
        else if(root->val<val){
            if(root->right==NULL){
                TreeNode* node = new TreeNode(val);
                root->right = node;
            }
            else insertInBST(root->right, val);
        }
    
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root = new TreeNode(pre[0]);
        for(int i = 1;i<pre.size();i++){
           insertInBST(root, pre[i]); 
        }
        return root;
    }
};