from typing import List
class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        if (grid[0][0] == 1): return -1
        queue =  []
        m = len(grid)
        n = len(grid[0])
        grid[0][0] = 1
        dir = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
        queue.append([0, 0])
        dis = 0
        while len(queue) != 0:
            dis += 1
            curr_len = len(queue)
            for i in range(curr_len):
                x,y = queue[0]
                if x == m - 1 and y == n-1: return dis
                queue.pop(0)
                for dx, dy in dir:
                    nx = x + dx
                    ny = y + dy
                    if nx < 0 or ny < 0 or nx >= m or ny >= n or grid[nx][ny]:
                        continue
                    queue.append([nx, ny])
                    grid[nx][ny] = 1
        return -1