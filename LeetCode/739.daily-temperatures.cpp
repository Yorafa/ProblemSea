/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        deque<int> q;
        int n = temperatures.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++){
            while (!q.empty() && temperatures[i] > temperatures[q.back()]){
                ans[q.back()] = i - q.back();
                q.pop_back();
            }
            q.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

