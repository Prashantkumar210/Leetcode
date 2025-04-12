class Solution {
public:

    TreeNode* convert(vector<int>&ans, int s, int e){

        if(s>e) return NULL;

        int mid = (s+e)/2;

        TreeNode* root = new TreeNode(ans[mid]);

        root->left = convert(ans, s, mid-1);
        root->right = convert(ans, mid+1, e);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int>nums;

        while(head){
            nums.push_back(head->val);
            head = head->next;
        }

        int s = 0;
        int e = nums.size()-1;

        TreeNode* root = NULL;
        if(nums.size()!=0){
            root = convert(nums, s, e);
        }

        return root;
    }
};