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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<TreeNode*, pair<int, int>>>q;
        vector<vector<int>>ans;

        q.push({root, {0, 0}});

        map<int, map<int, multiset<int>>>mp;

        while(!q.empty()){
            
            auto first = q.front();
            q.pop();

            TreeNode* temp = first.first;
            auto cr = first.second;

            int row = cr.first;
            int col = cr.second;

            mp[col][row].insert(temp->val);

            if(temp->left){
                q.push({temp->left, {row+1, col-1}});
            }
            if(temp->right){
                q.push({temp->right, {row+1, col+1}});
            }
        }

        for(auto it:mp){
            auto clmap = it.second;
            vector<int>temp;

            for(auto itcol: clmap){
                auto mset = itcol.second;
                temp.insert(temp.end(), mset.begin(), mset.end());
            } 

            ans.push_back(temp);
        }

        return ans;
    }
};