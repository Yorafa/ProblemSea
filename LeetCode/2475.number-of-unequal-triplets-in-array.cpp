/*
 * @lc app=leetcode id=2475 lang=cpp
 *
 * [2475] Number of Unequal Triplets in Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size(), l = 0;
        int ans = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n - 1; i++){
            if (nums[i] != nums[i+1]){
                ans += l * (i - l + 1) * (n - 1 - i);
                l = i + 1;
            }
        }
        return ans;
    }
};
// @lc code=end

