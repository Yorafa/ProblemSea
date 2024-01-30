#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
 */

// @lc code=start

//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd) {
        // inorder: left, root, right
        // postorder: left, right, root
        // that is use the last element in postorder as root
        if (inStart > inEnd || postStart > postEnd) return nullptr;
        int rootVal = postorder[postEnd];
        TreeNode* root = new TreeNode(rootVal);
        // then find left and right subtree through inorder
        int rootIndex = inStart;
        while (inorder[rootIndex] != rootVal) rootIndex++;
        // inorder: left, root, right => left subtree: inStart, rootIndex - 1
        // postorder: left, right, root => left subtree: postStart, postStart + rootIndex - inStart - 1
        // where rootIndex - inStart is the length of left subtree get from inorder
        root->left = helper(inorder, postorder, inStart, rootIndex - 1, postStart, postStart + rootIndex - inStart - 1);
        // inorder: left, root, right => right subtree: rootIndex + 1, inEnd
        // postorder: left, right, root => right subtree: postStart + rootIndex - inStart, postEnd - 1
        // where postEnd - 1 is the last element of right subtree in postorder
        root->right = helper(inorder, postorder, rootIndex + 1, inEnd, postStart + rootIndex - inStart, postEnd - 1);
        return root;
    }
};
// @lc code=end

