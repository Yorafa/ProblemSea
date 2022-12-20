/*
 * @lc app=leetcode id=2478 lang=cpp
 *
 * [2478] Number of Beautiful Partitions
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int beautifulPartitions(string s, int k, int minLength) {
        // dp[i][j] = 
        if (k*minLength > s.size()) return 0;
        vector<char> prime = {'2', '3', '5', '7'};
        set<char> prist(prime.begin(), prime.end());
        if (!prist.count(s[0]) || prist.count(s[s.size() - 1])) return 0;
        int n = s.size();
        long long mod = 1e9 + 7;
        vector<vector<long long>> dp(k + 1, vector<long long>(n + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= k; i++) {
            long long tot = 0;
            for (int j = i*minLength;  j <= n - (k-i)*minLength; j++) {
                if (j - minLength == 0 || j - minLength == n || 
                (!prist.count(s[j - minLength - 1]) && prist.count(s[j - minLength])))
                    tot = (tot + dp[i-1][j - minLength]) % mod;
                if (j == 0 || j == n || (!prist.count(s[j - 1]) && prist.count(s[j])))
                    dp[i][j] = tot % mod;
            }
        }
        return dp[k][n]%mod;
    }
};
// @lc code=end

