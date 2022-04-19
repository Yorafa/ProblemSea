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
    TreeNode* first = NULL, * second = NULL, *pre = NULL;
    void ff(TreeNode* root){
        if (root == NULL) return;
        ff(root->left);
        if (pre && root->val < pre->val){
            second = root;
            if (!first) first = pre;
            else return;
        }
        pre = root;
        ff(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        ff(root);
        swap(first->val, second->val);
    }
};
