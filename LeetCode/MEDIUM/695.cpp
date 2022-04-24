class Solution {
public:
    int seen[51][51] = {{0}};
    int f(vector<vector<int>>& grid, int r, int c){
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || seen[r][c]== 1 || grid[r][c] == 0) return 0;
        seen[r][c] = 1;
        return grid[r][c] + f(grid, r+1,c) + f(grid, r-1,c) + f(grid, r,c+1) + f(grid, r,c-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m0 = 0, count;
        for (int i = 0; i < grid.size(); i++) 
            for (int j = 0; j < grid[0].size(); j++){
                count = f(grid,i,j);
                if (count > m0) m0 = count;
            }
        return m0;
    }
};
