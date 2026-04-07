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
    int maxDepth(TreeNode* root) {
        // BFS
        if (root == NULL) {
            return 0;
        }

        queue<TreeNode *> q;
        int level = 0;
        q.push(root);

        while (!q.empty()) {
            
            size_t size = q.size();

            for (size_t i{0}; i < size; i++) {
                
                TreeNode *currNode = q.front();

                q.pop();
                
                if (currNode -> left != NULL) {
                    q.push(currNode -> left);
                }

                if (currNode -> right != NULL) {
                    q.push(currNode -> right);
                }
            }

            level++;
        }

        return level;
    }
};
