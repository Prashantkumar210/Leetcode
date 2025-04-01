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

    void find(TreeNode* root, int &targetSum, int currsum,vector<int>temp, vector<vector<int>>&ans){
        
      
        if(!root) return;

        if(!root->left && !root->right){

            temp.push_back(root->val);
            currsum += root->val;

            if(currsum == targetSum){
                ans.push_back(temp);
            } 
            return;
            cout<<endl;
        }

        currsum += root->val;
        temp.push_back(root->val);

        find(root->left, targetSum, currsum, temp, ans); 
        find(root->right, targetSum, currsum, temp, ans); 
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int>temp;
        vector<vector<int>>ans;
        int currsum = 0;

        find(root, targetSum, currsum, temp, ans);

        return ans;
    }
};