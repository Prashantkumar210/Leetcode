class Solution {
    TreeNode *FV = 0, *SV = 0, *prev = 0;
public:
    void solve(TreeNode*curr){
          if (!curr)
            return;
        solve(curr->left);
        if(prev && curr->val < prev->val){
            if(!FV) FV = prev ;
            SV = curr ;
        }
        prev = curr;
        solve(curr->right);
    }
    void recoverTree(TreeNode* root) {
      solve(root) ;
      if(FV && SV)
      swap(FV ->val,SV->val) ;
    }
};