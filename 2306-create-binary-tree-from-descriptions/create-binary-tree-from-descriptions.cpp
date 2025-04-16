class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        unordered_map<int, TreeNode*>mp;
        unordered_set<int>unique;

        for(int i=0; i<descriptions.size(); i++){

            if(mp.find(descriptions[i][0]) == mp.end()){
                mp[descriptions[i][0]] = new TreeNode(descriptions[i][0]);
            }
            if(mp.find(descriptions[i][1]) == mp.end()){
                mp[descriptions[i][1]] = new TreeNode(descriptions[i][1]);
            }

            unique.insert(descriptions[i][1]);
        }

        TreeNode* root = NULL;

        for(int i=0; i<descriptions.size(); i++){

            if(descriptions[i][2]) mp[descriptions[i][0]]->left = mp[descriptions[i][1]];
            else mp[descriptions[i][0]]->right = mp[descriptions[i][1]];

            if(unique.find(descriptions[i][0]) == unique.end()) {
                root = mp[descriptions[i][0]];
            }
        }

        return root;
    }
};