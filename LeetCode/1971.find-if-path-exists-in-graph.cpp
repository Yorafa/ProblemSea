/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

// @lc code=start
class Solution {
public:
    vector<int> r, p;
    int find(int x){
        if (x == p[x]) return x;
        p[x] = find(p[x]);
        return p[x];
    }
    void merge(int x, int y){
        int rx = find(x), ry = find(y);
        if (rx == ry) return;
        if (r[rx] > r[ry]){
            r[rx] += r[ry];
            p[ry] = rx;
        }else{
            r[ry] += r[rx];
            p[rx] = ry;
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for (int i = 0; i <= n; i++){
            r.push_back(1);
            p.push_back(i);
        }
        for (auto& v: edges) merge(v[0], v[1]);
        return find(source) == find(destination);
    }
};

// @lc code=end

