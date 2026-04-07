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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        maxDepth(root, maxDia);
        return maxDia;
    }

private:
    int maxDepth(TreeNode *root, int &maxDia) {
        /* base condition */
        if (root == nullptr) {
            return 0;
        }

        /* recursive function */
        int l = maxDepth(root -> left, maxDia);
        int r = maxDepth(root -> right, maxDia);

        int currMaxDia = l + r;

        maxDia = (maxDia > currMaxDia)? maxDia : currMaxDia;

        return 1 + max(l, r);
    }
};
