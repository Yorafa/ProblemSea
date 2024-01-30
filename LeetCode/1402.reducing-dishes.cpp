/*
 * @lc app=leetcode id=1402 lang=cpp
 *
 * [1402] Reducing Dishes
 */

// @lc code=start
class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(), s.end());
        int res = 0, total = 0, n = s.size();
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] + total <= 0) break;
            total += s[i];
            res += total;
        }
        return res;
    }
};
// @lc code=end

