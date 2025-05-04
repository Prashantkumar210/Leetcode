class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return createChilds(nums, 0, nums.size() - 1);
    }

    TreeNode* createChilds(const vector<int>& nums, int start, int end)
    {
        if (start > end)
            return nullptr;

        auto it = max_element(nums.begin() + start, nums.begin() + end + 1);
        int maxIndex = it - nums.begin();

        TreeNode* node = new TreeNode(nums[maxIndex]);

        node->left = createChilds(nums, start, maxIndex - 1);
        node->right = createChilds(nums, maxIndex + 1, end);

        return node;
    }
};