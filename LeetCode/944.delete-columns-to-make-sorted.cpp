/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int n = strs.size(), m = strs[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n-1; j++){
                if(strs[j][i]>strs[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
// @lc code=end

