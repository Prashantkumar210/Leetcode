class Solution {
public:

    void find(TreeNode* root, unordered_map<int, int>&count) {
        if (!root) return;

        count[root->val]++;
        find(root->left, count);
        find(root->right, count);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int>count;
        find(root, count);
        int maxFreq = 0;

        for (auto& [key, val] : count) {
            maxFreq = max(maxFreq, val);
        }
        
        vector<int>ans;
        for (auto& [key, val] : count) {
            if (val == maxFreq) {
                ans.push_back(key);
            } 
        }
        
        return ans;
    }
};