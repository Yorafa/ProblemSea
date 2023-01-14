/*
 * @lc app=leetcode id=790 lang=cpp
 *
 * [790] Domino and Tromino Tiling
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int numTilings(int n) {
        long long mod = 1e9 + 7;
        vector<int> dp(1001);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;
        for (int i = 4; i <= n; i++) dp[i] = (2*dp[i-1] + dp[i-3]) % mod;
        return dp[n];
    }
};
// @lc code=end