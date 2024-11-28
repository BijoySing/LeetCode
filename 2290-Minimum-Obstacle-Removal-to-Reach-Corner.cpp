class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> distance(m, vector<int>(n, INT_MAX)); // Minimum obstacles to reach each cell
        deque<pair<int, int>> dq; // Deque for 0-1 BFS
        
        // Start at (0, 0)
        distance[0][0] = 0;
        dq.push_front({0, 0});
        
        // Direction vectors for moving up, down, left, right
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        while (!dq.empty()) {
            auto [x, y] = dq.front();
            dq.pop_front();
            
            for (auto [dx, dy] : directions) {
                int nx = x + dx, ny = y + dy;
                
                if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    int newDist = distance[x][y] + grid[nx][ny];
                    
                    if (newDist < distance[nx][ny]) {
                        distance[nx][ny] = newDist;
                        if (grid[nx][ny] == 0) {
                            dq.push_front({nx, ny}); // Prioritize empty cells
                        } else {
                            dq.push_back({nx, ny}); // Process obstacle cells later
                        }
                    }
                }
            }
        }
        
        return distance[m-1][n-1];
    }
};
