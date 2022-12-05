/*
 * @lc app=leetcode id=454 lang=cpp
 *
 * [454] 4Sum II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int, int> mp;
        for (int i = 0; i < nums1.size(); i++) for (int j = 0; j < nums2.size(); j++) mp[nums1[i] + nums2[j]] ++;
        int res = 0;
        for (int i = 0; i < nums3.size(); i++) for (int j = 0; j < nums4.size(); j++){
            if (mp.find(- (nums3[i] + nums4[j]))!=mp.end()) res += mp[- (nums3[i] + nums4[j])];
        }
        return res;
    }
};
// @lc code=end

