class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fo = 0, row, col, time = 0;
        for (int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size();j++){
                if (grid[i][j] == 2) q.push(make_pair(i,j));
                if (grid[i][j] == 1) fo++;
            }
        }
        q.push(make_pair(-1, -1));
        while (!q.empty()){
            row = q.front().first;
            col = q.front().second;
            q.pop();
            if (q.empty()) break;
            if (row == -1){
                q.push(make_pair(-1, -1));
                time ++;
            }
            else{
                if(row - 1 >= 0 && grid[row - 1][col] == 1){
                    grid[row - 1][col] = 2;
                    q.push(make_pair(row-1, col));
                    fo--;
                }
                if(row + 1 < grid.size() && grid[row + 1][col] == 1){
                    grid[row + 1][col] = 2;
                    q.push(make_pair(row+1, col));
                    fo--;
                }
                if(col - 1 >= 0 && grid[row][col - 1] == 1){
                    grid[row][col - 1] = 2;
                    q.push(make_pair(row, col - 1));
                    fo--;
                }
                if(col + 1 < grid[0].size() && grid[row][col + 1] == 1){
                    grid[row][col + 1] = 2;
                    q.push(make_pair(row, col + 1));
                    fo--;
                }
            }
        }
        return fo == 0?time : -1;
    }
};
