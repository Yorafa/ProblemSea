/*
 * @lc app=leetcode id=2389 lang=cpp
 *
 * [2389] Longest Subsequence With Limited Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> pre(nums);
        for (int i = 1; i < pre.size(); i++) pre[i] += pre[i-1];
        vector<int> ans;
        for (int i: queries) ans.push_back(upper_bound(pre.begin(), pre.end(), i) - pre.begin());
        return ans;
    }
};
// @lc code=end

