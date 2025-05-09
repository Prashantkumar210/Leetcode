class Solution {
public:
    vector<TreeNode*> findAllNodesWithValue(TreeNode* root, int value) {
        vector<TreeNode*> result;
        if (root == nullptr) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* first = q.front();
            q.pop();
            if (first->val == value) {
                result.push_back(first);
            }
            if (first->left != nullptr) {
                q.push(first->left);
            }
            if (first->right != nullptr) {
                q.push(first->right);
            }
        }
        return result;
    }

    bool isSubtreeAux(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        }
        if ((root == nullptr && subRoot != nullptr) ||
            (root != nullptr && subRoot == nullptr)) {
            return false;
        }

        if ((root == nullptr && subRoot != nullptr) ||
            (root != nullptr && subRoot == nullptr) ||
            (root->val != subRoot->val)) {
            return false;
        }
        return isSubtreeAux(root->left, subRoot->left) &&
               isSubtreeAux(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        }
        if ((root == nullptr && subRoot != nullptr) ||
            (root != nullptr && subRoot == nullptr)) {
            return false;
        }
        vector<TreeNode*> vec = findAllNodesWithValue(root, subRoot->val);
        for (TreeNode* node : vec) {
            if (isSubtreeAux(node, subRoot)) {
                return true;
            }
        }
        return false;
    }
};