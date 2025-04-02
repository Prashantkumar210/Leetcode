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
    
    void find(TreeNode* root, vector<vector<int>>&ans){

        if(!root) return;

        queue<TreeNode*>Q;
        Q.push(root);
        Q.push(NULL);

        vector<int>path;

        while(!Q.empty()){

            TreeNode* temp = Q.front();
            Q.pop();

            if(!temp){

                ans.push_back(path);
                path.clear();

                if(!Q.empty()) Q.push(NULL);
            }
            else{
                path.push_back(temp->val);

                if(temp->left) Q.push(temp->left);
                if(temp->right) Q.push(temp->right);
            }
        }

    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;

        find(root, ans);

        for(int i=0; i<ans.size(); i++){

            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }        

        return ans;
    }
};