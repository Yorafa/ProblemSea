/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        if (!s.size() || !p.size()) return false;
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
        dp[0][0] = true;
        for (int j = 0; j < n; j++) if (p[j] == '*') dp[0][j + 1] = dp[0][j - 1];
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (p[j] != '*') dp[i+1][j+1] = dp[i][j] && (p[j] == s[i] || p[j] == '.');
                else dp[i+1][j+1] = (dp[i+1][j] || dp[i+1][j-1] || ((s[i] == p[j - 1] || p[j - 1] == '.') && dp[i][j+1]));
            }
        }
        return dp[m][n];
    }
};
// @lc code=end

