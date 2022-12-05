/*
 * @lc app=leetcode id=149 lang=cpp
 *
 * [149] Max Points on a Line
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int gcd(int a, int b){
        return b == 0? a:gcd(b,a%b);
    }
    int maxPoints(vector<vector<int>>& points) {
        // y = kx + b
        if (points.size() == 1) return 1;
        int n = points.size();
        int res = 0;
        for (int i = 0; i < n; i++){
            map<string, int> mp;
            int xdup = 0, ydup = 0;
            for (int j = i + 1; j < n; j++){
                int ydiff = points[j][1] - points[i][1];
                int xdiff = points[j][0] - points[i][0];
                if (ydiff == 0) {ydup++; continue;}
                if (xdiff == 0) {xdup++; continue;}
                int d = gcd(xdiff, ydiff);
                xdiff/=d, ydiff/=d;
                mp[to_string(xdiff) + "_" + to_string(ydiff)]++;
            }
            res = max(xdup+1, res);
            res = max(ydup+1, res);
            for (auto& pi: mp) res = max(res, pi.second+1);
        }
        return res;
    }
};
// @lc code=end

