class Solution {
public:

    void inorder(TreeNode* root,unordered_map<TreeNode* ,TreeNode*>&mp)
    {
        if(root == NULL)
        return;

        if(root->left)
        mp[root->left] = root;
        if(root->right)
        mp[root->right] = root;

        

        inorder(root->left,mp);
        inorder(root->right,mp);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        unordered_map<TreeNode* ,TreeNode*>mp;
        inorder(root,mp);
        unordered_set<TreeNode*>vis;
        int dis = 0;
        queue<TreeNode*>q;

        q.push(target);

        while(dis != k)
        {
            
            int s = q.size();
            while(s--)
            {
                TreeNode* temp = q.front();
                q.pop();

                if(vis.find(temp) == vis.end())
                {
                    vis.insert(temp);

                    if(temp->left && vis.find(temp->left) == vis.end())
                    q.push(temp->left);

                    if(temp->right && vis.find(temp->right) == vis.end())
                    q.push(temp->right);

                    if(mp.find(temp) != mp.end() && vis.find(mp[temp]) == vis.end())
                    q.push(mp[temp]);
                }
            }
             dis++;
        }

        int n = q.size();
        vector<int>v;
        while(n--)
        {
            v.push_back(q.front()->val);
            q.pop();
        }

        return v;
    }
};