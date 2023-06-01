 
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) {
            // If the start or end cell is blocked, no clear path exists
            return -1;
        }

        vector<vector<int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        queue<pair<int, int>> q;
        q.push({0, 0}); // Start from the top-left cell
        grid[0][0] = 1; // Mark the start cell as visited

        int pathLength = 0;

        while (!q.empty()) {
            int size = q.size();
            pathLength++;

            for (int i = 0; i < size; i++) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if (x == n-1 && y == n-1) {
                    // Reached the bottom-right cell, return the path length
                    return pathLength;
                }

                for (const auto& dir : directions) {
                    int newX = x + dir[0];
                    int newY = y + dir[1];

                    if (newX >= 0 && newX < n && newY >= 0 && newY < n && grid[newX][newY] == 0) {
                        // Valid neighbor cell, mark as visited and enqueue
                        q.push({newX, newY});
                        grid[newX][newY] = 1; // Mark as visited
                    }
                }
            }
        }

        // No clear path found
        return -1;
    }
};
