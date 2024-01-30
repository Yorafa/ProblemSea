/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
 */

// @lc code=start
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
        // preorder: root, left, right
        // inorder: left, root, right
        // that is use the first element in preorder as root
        if (preStart > preEnd || inStart > inEnd) return nullptr;
        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);
        // then find left and right subtree through inorder
        int rootIndex = inStart;
        while (inorder[rootIndex] != rootVal) rootIndex++;
        // preorder: root, left, right => left subtree: preStart + 1, preStart + rootIndex - inStart
        // inorder: left, root, right => left subtree: inStart, rootIndex - 1
        // where rootIndex - inStart is the length of left subtree get from inorder
        root->left = helper(preorder, inorder, preStart + 1, preStart + rootIndex - inStart, inStart, rootIndex - 1);
        // preorder: root, left, right => right subtree: preStart + rootIndex - inStart + 1, preEnd
        // inorder: left, root, right => right subtree: rootIndex + 1, inEnd
        root->right = helper(preorder, inorder, preStart + rootIndex - inStart + 1, preEnd, rootIndex + 1, inEnd);
        return root;
    }
};
// @lc code=end

