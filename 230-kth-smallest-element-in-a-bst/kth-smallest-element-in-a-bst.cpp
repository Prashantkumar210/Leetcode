class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        
        if(!root) return -1;

        int left = kthSmallest(root->left, k);
        if(left!=-1) return left;
        --k;
        if(k==0) return root->val;

        int right = kthSmallest(root->right, k);
        return right;;
    }
};