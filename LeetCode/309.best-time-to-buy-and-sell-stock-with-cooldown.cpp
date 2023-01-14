/*
 * @lc app=leetcode id=309 lang=cpp
 *
 * [309] Best Time to Buy and Sell Stock with Cooldown
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        int held = INT_MIN, sold = INT_MIN, reset = 0;
        for (int i = 0; i < n; i++){
            int pre = sold;
            sold = held + prices[i];
            held = max(held, reset - prices[i]);
            reset = max(reset, pre);
        }
        return max(sold, reset);
    }
};
// @lc code=end

