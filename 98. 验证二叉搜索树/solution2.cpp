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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> stk;
        long long tmp = LONG_MIN;
        while(root || !stk.empty()) {
            if(root) {
                stk.push(root);
                root = root->left;
            }
            else {
                root = stk.top();
                stk.pop();
                if(root->val <= tmp) return false;
                tmp = root->val;
                root = root->right;
            }
        }
        return true;
    }
};