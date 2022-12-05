/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> cnt;
        vector<string> bucket(s.size() + 10, "");
        string res;
        for (char c: s) cnt[c]++;
        for (auto& pir: cnt) bucket[pir.second].append(pir.second, pir.first);
        for (int i = s.size(); i > 0; i--) if (bucket[i].size() > 0) res += bucket[i];
        return res;
    }
};
// @lc code=end

