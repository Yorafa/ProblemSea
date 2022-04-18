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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> lst;
        inorder(root, lst);
        return lst[k-1];
    }
    void inorder(TreeNode* root, vector<int>& lst){
        if (!root) return;
        inorder(root->left, lst);
        lst.push_back(root->val);
        inorder(root->right, lst);
    }
};
