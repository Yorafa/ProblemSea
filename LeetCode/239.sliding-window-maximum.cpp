/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> q;
        for (int i = 0; i < nums.size(); i++) {
            while (!q.empty() && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            q.push_back(i);
            if (i - q.front() >= k) {
                q.pop_front();
            }
            if (i >= k - 1) {
                res.push_back(nums[q.front()]);
            }
        }
        return res;
    }
};
// @lc code=end

