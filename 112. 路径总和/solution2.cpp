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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        queue<TreeNode*> q;
        queue<int> qval;
        q.push(root);
        qval.push(root->val);
        while(!q.empty()) {
            TreeNode *node = q.front();
            int val = qval.front();
            q.pop();
            qval.pop();
            if(node->left == nullptr && node->right == nullptr) {
                if(val == targetSum) return true;
            }
            if(node->left != nullptr) {
                q.push(node->left);
                qval.push(node->left->val + val);
            }
            if(node->right != nullptr) {
                q.push(node->right);
                qval.push(node->right->val + val);
            }
        }
        return false;
    }
};