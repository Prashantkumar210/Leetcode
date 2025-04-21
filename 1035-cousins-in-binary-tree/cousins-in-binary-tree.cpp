class Solution {
public:

    void find(TreeNode* root, int x, int y, int &xdepth, int &ydepth, int count, int &check){
        
        if(!root) return;

        else if(((root->left && root->right) && ((root->left->val == x && root->right->val == y) || (root->left->val == y && root->right->val == x)))){
            xdepth = -2;
            ydepth = 0;
            check = 1;
            return;
        }
        else if(check == 0 && root->val == x){
            xdepth = count;
            return;
        }

        else{
            if(check == 0 && root->val == y){
                ydepth = count;
                return;
            }
        }

        count++;

        find(root->left, x, y, xdepth, ydepth, count, check);
        find(root->right, x, y, xdepth, ydepth, count, check);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        int xdepth = 0;
        int ydepth = 0;
        int count = 0;
        int check = 0;

        if((root->val == x) || (root->val== y)) return false;

        find(root, x, y, xdepth, ydepth, count, check);
        return xdepth == ydepth;
    }
};