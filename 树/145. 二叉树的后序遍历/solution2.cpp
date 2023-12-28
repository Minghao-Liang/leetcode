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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> re;
        stack<TreeNode*> stk;
        if(root != nullptr) stk.push(root);
        while(!stk.empty()) {
            TreeNode *node = stk.top();
            if(node != nullptr) {
                stk.pop();
                stk.push(node);
                stk.push(nullptr);
                if(node->right) stk.push(node->right);
                if(node->left) stk.push(node->left);
            }
            else {
                stk.pop();
                node = stk.top();
                stk.pop();
                re.push_back(node->val);
            }
        }
        return re;
    }
};