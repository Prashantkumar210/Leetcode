class Solution {
public:
    bool isfind = true;    

    int height(TreeNode* root){

        if(!root) return 0;

        int left = height(root->left);
        int right = height(root->right);

        if(isfind && abs(left-right)>1) isfind = false;
        return max(left, right)+1;
    }

    bool isBalanced(TreeNode* root) {
        
        int  find = height(root); 
        return isfind;
    }
};