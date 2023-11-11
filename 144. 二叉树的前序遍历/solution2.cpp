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
    vector<int> preorderTraversal(TreeNode* root) {  
        vector<int> re;  
        if(root == nullptr) return re;  
        stack<TreeNode*> stk;  
        TreeNode *node = root;  
        while(node || !stk.empty()) {  
            if(node) {
                re.push_back(node->val);
                stk.push(node);  
                node = node->left;  
            }  
            else {  
                node = stk.top();  
                stk.pop();  
                node = node->right;  
            }  
        }  
        return re;  
    }  
};