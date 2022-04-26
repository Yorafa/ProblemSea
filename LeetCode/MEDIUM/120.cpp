class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size() == 1) return triangle[0][0];
        if (triangle.size() == 2) return triangle[0][0] + min(triangle[1][0], triangle[1][1]);
        vector<vector<int>> dp(triangle);
        int mn = INT_MAX;
        for (int i = 1; i < dp.size(); i++){
            for (int j = 0; j <dp[i].size(); j++){
                if (j < 1) dp[i][j] = dp[i-1][j] + triangle[i][j];
                else if (j == dp[i].size()-1) dp[i][j] = dp[i-1][j-1] + triangle[i][j]; 
                else dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]) + triangle[i][j]; 
                if (i == dp.size() -1) mn = min(mn, dp[i][j]);
            }
        }
        
        return mn;
    }
};
