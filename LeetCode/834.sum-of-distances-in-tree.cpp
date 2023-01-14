/*
 * @lc app=leetcode id=834 lang=cpp
 *
 * [834] Sum of Distances in Tree
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> ans,  cnt;
    vector<vector<int>> graph;
    int n;
    void dfs(int curr, int pi){ // pre; cal each root to their child distance.
        for (int i: graph[curr]){
            if (i != pi){
                dfs(i, curr);
                cnt[curr] += cnt[i]; // to each children of curr node
                ans[curr] += ans[i] + cnt[i];
            }
        }
    }

    void dfsc(int curr, int pi){ // post; cal each child to pi and pi other children distance
        for (int i: graph[curr]){
            if (i != pi){
                ans[i] = ans[curr] - cnt[i]; // total distance to all others (not children) start from pi
                ans[i] += n - cnt[i]; // add 1 to all other (not children)
                dfsc(i, curr);
            }
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        ans = vector<int>(n, 0), cnt = vector<int>(n, 1);
        graph = vector<vector<int>>(n);
        this->n = n;
        for (auto v: edges){
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        dfs(0, -1);
        dfsc(0, -1);
        return ans;
    }
};
// @lc code=end

