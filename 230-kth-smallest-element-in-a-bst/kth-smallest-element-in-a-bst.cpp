class Solution {
public:

    void find(TreeNode* root, int &k,vector<int>&arr){

        if(root==NULL)  return;

        arr.push_back(root->val);

        find(root->left, k, arr);
        find(root->right, k, arr);
    }

    int kthSmallest(TreeNode* root, int k) {
        
      
        vector<int>arr;
        find(root, k,arr);

        sort(arr.begin(), arr.end());

        int ans =0;
        for(int i=0; i<k; i++){

            ans = arr[i];
        }

        return ans;
    }
};