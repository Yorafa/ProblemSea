/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int res = 0, total = 0, tank = 0;
        for (int i = 0; i < gas.size(); i++){
            tank = tank - cost[i] + gas[i];
            if (tank < 0){
                res = i + 1;
                total += tank;
                tank = 0;
            }
        }
        return (total+tank) < 0 ? -1:res;
    }
};
// @lc code=end

