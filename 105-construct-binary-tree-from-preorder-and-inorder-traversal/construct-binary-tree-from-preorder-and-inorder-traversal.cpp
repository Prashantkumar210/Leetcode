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
        
        for(int i=0; i<inorder.size(); i++){
            
            if(inorder[i]==element) return i;
        }
        return -1;
    }

    TreeNode* BuildTree(vector<int> &inorder, vector<int> &preorder,
                        int &preindex, int startindex, int endindex){
        
        if(preindex>=inorder.size() || startindex>endindex) return NULL;
    
        int element = preorder[preindex++];
        TreeNode* root = new TreeNode(element);
        int pos = find(element, inorder);
        
        root->left = BuildTree(inorder, preorder, preindex, startindex, pos-1);
        root->right = BuildTree(inorder, preorder, preindex, pos+1, endindex);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int preindex = 0;
        int startindex = 0;
        int endindex = inorder.size()-1;
        
        return BuildTree(inorder, preorder, preindex, startindex, endindex);
    }
};