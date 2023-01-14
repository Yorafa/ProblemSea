/*
 * @lc app=leetcode id=886 lang=cpp
 *
 * [886] Possible Bipartition
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& color, int i, int c){
        color[i] = c;
        for (int j: graph[i]){
            if (!color[j] && !dfs(graph, color, j, -c)) return false;
            if (color[j] == color[i]) return false;
        }
        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> color(n + 1, 0);
        vector<vector<int>> graph(n + 1);
        for (auto v: dislikes) {
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        for (int i = 1; i <= n; i++){
            if (color[i]) continue;
            if (!dfs(graph, color, i, 1)) return false;
        }
        return true;
    }
};
// @lc code=end

