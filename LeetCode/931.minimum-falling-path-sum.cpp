/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int n, m;
    int dfs(int r, int c, vector<vector<int>>& matrix, vector<vector<int>>& dp){
        if (r < 0 || c < 0 || r >= m || c >= n) return INT_MAX;
        if (dp[r][c] != INT_MAX) return dp[r][c];
        dp[r][c] = min(min(dfs(r+1, c -1, matrix, dp), dfs(r+1, c, matrix, dp)), dfs(r+1, c + 1, matrix, dp));
        dp[r][c] = dp[r][c] == INT_MAX ? matrix[r][c]:dp[r][c] + matrix[r][c];
        return dp[r][c];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        this->m = matrix.size();
        this->n = matrix[0].size();
        vector<vector<int>> dp(matrix);
        int mi = INT_MAX;
        for (int i = 0; i < m; i ++)for (int j = 0; j < n; j ++) dp[i][j] = INT_MAX;
        for (int i = 0; i < n; i ++) mi = min(dfs(0, i, matrix, dp), mi);
        return mi;
    }
};
// @lc code=end

