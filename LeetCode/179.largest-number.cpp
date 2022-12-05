/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> cp;
        for (int i: nums) cp.push_back(to_string(i));
        sort(cp.begin(), cp.end(), [](string& s1, string& s2){return s1 + s2 < s2 + s1;});
        string ans = "";
        for (int i = cp.size() - 1; i >= 0; i--) ans += cp[i];
        while(ans[0] == '0' && ans.size() > 1) ans.erase(0, 1);
        return ans;
    }
};
// @lc code=end

