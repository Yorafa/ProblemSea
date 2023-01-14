/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int lcnt = 0, ucnt = 0;
        for (int i = 0; i < n; i++) {
            if (word[i] >= 'a' && word[i] <= 'z') lcnt++;
            else ucnt++;
        }
        if (lcnt == n || ucnt == n) return true;
        if (ucnt == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;
        return false;
    }
};
// @lc code=end

