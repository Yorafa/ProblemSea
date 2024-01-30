/*
 * @lc app=leetcode id=2348 lang=cpp
 *
 * [2348] Number of Zero-Filled Subarrays
 */

// @lc code=start
typedef long long ll;
class Solution {
public:
    ll zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0, n = nums.size(); 
        ll dp[n];
        memset(dp, 0, sizeof(dp));
        if (nums[0] == 0) dp[0] = 1;
        for (int i = 1; i < n; i++){
            if (nums[i] == 0 && nums[i] == nums[i - 1]) dp[i] = dp[i - 1] + 1;
            else if (nums[i] == 0) dp[i] = 1;
            ans += dp[i];
        }
        return ans + dp[0];
    }
};
// @lc code=end

