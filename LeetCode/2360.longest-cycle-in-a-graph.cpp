/*
 * @lc app=leetcode id=2360 lang=cpp
 *
 * [2360] Longest Cycle in a Graph
 */

// @lc code=start
class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size(), dep = 1;
        vector<int> idx(n, 0);
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int k = dep;
            int j = i;
            while (j != -1 && !idx[j]) {
                idx[j] = dep++;
                j = edges[j];
            }
            if (j != -1 && idx[j] >= k) {
                ans = max(ans, dep - idx[j]);
            }
        }
        return ans;
    }
};
// @lc code=end

