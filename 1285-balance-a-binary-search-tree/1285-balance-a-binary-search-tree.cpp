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

    void inorder(vector<int>&nums, TreeNode* root){

        if(root==NULL) return;

        inorder(nums, root->left);

        nums.push_back(root->val);
    
        inorder(nums, root->right);

    }

    TreeNode* convertIntoBalanced(vector<int>&nums, int s, int e){

        if(s>e) return NULL;

        int mid = (s+e)/2;

        TreeNode* head = new TreeNode(nums[mid]);

        head->left = convertIntoBalanced(nums, s, mid-1);
        head->right = convertIntoBalanced(nums, mid+1, e);

        return head;
    }  

    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int>nums;
        inorder(nums, root);

        TreeNode* head = NULL;
        
        if(nums.size()==0) return root;

        int s = 0;
        int e = nums.size()-1;

        head = convertIntoBalanced(nums, s, e);

        return head;
    }
};