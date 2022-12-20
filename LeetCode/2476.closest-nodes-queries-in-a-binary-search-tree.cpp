/*
 * @lc app=leetcode id=2476 lang=cpp
 *
 * [2476] Closest Nodes Queries in a Binary Search Tree
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
/**
 * Definition for a binary tree node.
*/
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
    vector<int> val;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        val.push_back(root->val);   
        inorder(root->right);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        inorder(root);
        sort(val.begin(),val.end());
        vector<vector<int>> ans;
        for (int i = 0 ; i < queries.size(); i++){
            int q = queries[i];
            int l = 0, r = val.size()-1;
            int ans1 = -1, ans2 = -1;
            while(l<=r){
                int mid = (l+r)/2;
                if(val[mid]==q){
                    ans1 = val[mid];
                    ans2 = val[mid];
                    break;
                }
                else if(val[mid]>q){
                    ans2 = val[mid];
                    r = mid-1;
                }
                else{
                    ans1 = val[mid];
                    l = mid+1;
                }
            }
            ans.push_back({ans1,ans2});
        }
        return ans;
    }
};
// @lc code=end

