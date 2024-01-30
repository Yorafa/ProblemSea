/*
 * @lc app=leetcode id=983 lang=cpp
 *
 * [983] Minimum Cost For Tickets
 */

// @lc code=start
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            int j = i;
            dp[i] = dp[i + 1] + costs[0];
            while (j < n && days[j] - days[i] < 7) j++;
            dp[i] = min(dp[i], dp[j] + costs[1]);
            while (j < n && days[j] - days[i] < 30) j++;
            dp[i] = min(dp[i], dp[j] + costs[2]);
        }
        return dp[0];
        
    }
};
// @lc code=end

