/*
 * @lc app=leetcode id=1657 lang=cpp
 *
 * [1657] Determine if Two Strings Are Close
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int a[26] = {0}, b[26] = {0};
        unordered_set<char> s1, s2;
        for (auto c : word1) {a[c - 'a']++; s1.insert(c);}
        for (auto c : word2) {b[c - 'a']++; s2.insert(c);}
        if (s1 != s2) return false;
        sort(a, a + 26);
        sort(b, b + 26);
        for (int i = 0; i < 26; i++) if (a[i] != b[i]) return false;
        return true;
    }
};
// @lc code=end

