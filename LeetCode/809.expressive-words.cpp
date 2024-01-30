/*
 * @lc app=leetcode id=809 lang=cpp
 *
 * [809] Expressive Words
 */

// @lc code=start
class Solution {
public:
    bool check(string &s, string &p){
        int j = 0;
        for (int i = 0; i < s.size(); i ++){
            if (j < p.size() && s[i] == p[j]) j++;
            else if (i > 1 && s[i-1] == s[i] && s[i-2] == s[i-1]);
            else if (i > 0 && s[i-1] == s[i] && s[i] == s[i+1]);
            else return false;
        }
        return j == p.size();
    }

    int expressiveWords(string s, vector<string>& words) {
        int res = 0;
        for (auto& p: words)
            if (check(s, p)) res++;
        return res;
    }
};
// @lc code=end

