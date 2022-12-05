/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int i: nums) s.insert(i);
        int res = 0;
        for (int i: nums){
            if (s.find(i-1) == s.end()){
                int j = i;
                while (s.find(j) != s.end()) j++;
                res = max(res, j-i);
            }
        }
        return res;
    }
};
// @lc code=end

