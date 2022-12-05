class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(105);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (i-2<0) dp[i] = (dp[i-1] >= nums[i])?dp[i-1]:nums[i];
            else dp[i] = (dp[i-1] >= nums[i] + dp[i-2])?dp[i-1]:nums[i] + dp[i-2];
        }
        return dp[nums.size()-1];
    }
};
