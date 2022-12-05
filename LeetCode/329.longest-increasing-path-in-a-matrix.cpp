/*
 * @lc app=leetcode id=329 lang=cpp
 *
 * [329] Longest Increasing Path in a Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int res = 0, m, n;
    int dfs(vector<vector<int>>& matrix, int i, int j, int pre, vector<vector<int>>& memo, int con){
        if (i < 0 || j < 0 || i >= m || j >= n) return con;
        if (matrix[i][j] <= pre) return con;
        if (memo[i][j] > -1) {res = max(res, con + memo[i][j]); return con + memo[i][j];}
        int temp = con;
        memo[i][j] = 1;
        memo[i][j] = max(dfs(matrix, i - 1, j, matrix[i][j], memo, con + 1) - temp, memo[i][j]);
        memo[i][j] = max(dfs(matrix, i + 1, j, matrix[i][j], memo, con + 1) - temp, memo[i][j]);
        memo[i][j] = max(dfs(matrix, i, j - 1, matrix[i][j], memo, con + 1) - temp, memo[i][j]);
        memo[i][j] = max(dfs(matrix, i, j + 1, matrix[i][j], memo, con + 1) - temp, memo[i][j]);
        res = max(res, memo[i][j] + temp);
        return memo[i][j] + temp;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> memo(m, vector<int>(n, -1));
        for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) if (memo[i][j] == -1) dfs(matrix, i, j, -1, memo, 0);
        return res;
    }
};
// @lc code=end

