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
    bool isBalanced(TreeNode* root) {
        bool result = true;
        maxDepth(root, result);

        return result;
    }

private:
    int maxDepth(TreeNode *root, bool &result) {
        if (root == nullptr) {
            return 0;
        }

        int l = maxDepth(root -> left, result);
        int r = maxDepth(root -> right, result);

        if (abs(l - r) > 1) {
            result = false;
        }

        return 1 + max(l, r);
    }
};
