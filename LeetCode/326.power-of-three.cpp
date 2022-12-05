/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        long long base = pow(3,31);
        return (n<=0)? false:base%n == 0;
    }
};
// @lc code=end

