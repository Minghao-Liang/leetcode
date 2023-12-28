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
    bool check(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> que;
        que.push(p);
        que.push(q);
        while(!que.empty()) {
            TreeNode *node1 = que.front();
            que.pop();
            TreeNode * node2 = que.front();
            que.pop();
            if(node1 == nullptr && node2 == nullptr) continue;
            if(node1 == nullptr || node2 == nullptr) return false;
            if(node1->val != node2->val) return false;
            que.push(node1->left);
            que.push(node2->right);
            que.push(node1->right);
            que.push(node2->left);
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return check(root, root);
    }
};