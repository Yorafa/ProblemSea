/*
 * @lc app=leetcode id=1519 lang=cpp
 *
 * [1519] Number of Nodes in the Sub-Tree With the Same Label
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& graph, string& labels, int curr, int pi, vector<int>& cnt, vector<int>& res){
        int temp = cnt[labels[curr] - 'a']++;
        for (auto& child: graph[curr]){
            if (child == pi) continue;
            dfs(graph, labels, child, curr, cnt, res);
        }
        res[curr] = cnt[labels[curr] - 'a'] - temp;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> graph(n);
        for (auto& v: edges){
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        vector<int> cnt(26), res(n);
        dfs(graph, labels, 0, -1, cnt, res);
        return res;
    }
};
// @lc code=end

