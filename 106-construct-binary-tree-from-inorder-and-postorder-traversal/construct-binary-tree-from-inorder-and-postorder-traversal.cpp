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

     int find(int element, vector<int>&inorder){
        
        for(int i=0; i<inorder.size(); i++) if(inorder[i]==element) return i;
        return -1;
    }

    TreeNode* BuildTree(vector<int> &inorder, vector<int> &postorder,
                        int &postindex, int startindex, int endindex){
        
        if(postindex<0 || startindex>endindex) return NULL;
        int element = postorder[postindex--];
        TreeNode* root = new TreeNode(element);
        int pos = find(element, inorder);
       
        root->right = BuildTree(inorder, postorder, postindex, pos+1, endindex);
        root->left = BuildTree(inorder, postorder, postindex, startindex, pos-1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int postindex = postorder.size()-1;
        int startindex = 0;
        int endindex = inorder.size()-1;

        return BuildTree(inorder, postorder, postindex, startindex, endindex);
    }
};