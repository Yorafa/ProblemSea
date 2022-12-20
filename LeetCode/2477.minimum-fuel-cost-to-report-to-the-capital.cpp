/*
 * @lc app=leetcode id=2477 lang=cpp
 *
 * [2477] Minimum Fuel Cost to Report to the Capital
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    long long ans;
    long long dfs(vector<vector<int>>& graph, int u, set<int>& vis, int seats) {
        vis.insert(u);
        long long cnt = 1;
        for (int v : graph[u]) {
            if (vis.count(v)) continue;
            cnt += dfs(graph, v, vis, seats);
        }
        ans += ceil(1.0* cnt / seats);
        return cnt;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        if (roads.size() == 0) return 0;
        int n = roads.size() + 1;
        vector<vector<int>> graph(n);
        for (auto& road : roads) {
            int u = road[0], v = road[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        ans = 0;
        set<int> vis;
        vis.insert(0);
        for (int i : graph[0]) dfs(graph, i, vis, seats);
        return ans;
    }
};
// @lc code=end