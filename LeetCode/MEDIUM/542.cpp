class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> res (mat.size(), vector<int>(mat[0].size(), 10001));
        queue<pair<int, int>> q;
        for (int i = 0; i < mat.size(); i++){
            for (int j = 0; j < mat[0].size(); j++){
                if (mat[i][j] == 0){
                    q.push(make_pair(i, j));
                    res[i][j] = 0;
                }
            }
        }
        int r, c;
        while (!q.empty()){
            r = q.front().first;
            c = q.front().second;
            q.pop();
            if (r-1>=0 && res[r-1][c] > res[r][c] + 1){
                res[r-1][c] = res[r][c] + 1;
                q.push(make_pair(r-1, c));
            }
            if (r+1<mat.size() && res[r+1][c] > res[r][c] + 1){
                res[r+1][c] = res[r][c] + 1;
                q.push(make_pair(r+1, c));
            }
            if (c-1>=0 && res[r][c-1] > res[r][c] + 1){
                res[r][c-1] = res[r][c] + 1;
                q.push(make_pair(r, c-1));
            }
            if (c+1<mat[0].size() && res[r][c+1] > res[r][c] + 1){
                res[r][c+1] = res[r][c] + 1;
                q.push(make_pair(r, c+1));
            }
        }
        return res;
    }
};
