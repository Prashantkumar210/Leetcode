class Solution {
public:
    double sum = 0;
    int node = 0;

    void find(TreeNode* root, vector<double>&nums){
        
        if(!root) return;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(!temp){
                double Data = sum/node;
                nums.push_back(Data);
                sum = 0;
                node = 0;
                if(!q.empty()) q.push(NULL);
            }
            else{
                sum += temp->val;
                ++node;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        find(root, ans);

        return ans;
    }
};