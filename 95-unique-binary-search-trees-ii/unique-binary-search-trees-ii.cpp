class Solution {
public:
    vector<TreeNode*> backtrack(int start,int end){
        vector<TreeNode*> ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        for(int i=start;i<=end;i++){
            vector<TreeNode*> left=backtrack(start,i-1);
            vector<TreeNode*> right=backtrack(i+1,end);

            for(TreeNode* x:left){
                for(TreeNode* y:right){
                    TreeNode* root=new TreeNode(i);
                    root->left=x;
                    root->right=y;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return backtrack(1,n);
    }
};