/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string cp;
        for (char c:s){
            if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z') continue;
            if (c >= 'A' && c <= 'Z') cp += c - 'A' + 'a';
            else cp += c;
        }
        int l = 0, r = cp.size() - 1;
        while (l < r) if (cp[l++] != cp[r--]) return false;
        return true;
    }
};
// @lc code=end

