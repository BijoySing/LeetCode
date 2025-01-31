class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        unordered_map<int, int> islandSize;
        int label = 2; 
        int maxSize = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    int size = dfs(grid, i, j, label);
                    islandSize[label] = size;
                    maxSize = max(maxSize, size);
                    label++;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    unordered_map<int, int> neighborLabels;
                    for (auto& dir : dirs) {
                        int x = i + dir[0], y = j + dir[1];
                        if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] > 1) {
                            neighborLabels[grid[x][y]] = islandSize[grid[x][y]];
                        }
                    }
                    int total = 1;
                    for (auto& [key, val] : neighborLabels) {
                        total += val;
                    }
                    maxSize = max(maxSize, total);
                }
            }
        }

        return maxSize;
    }

private:
    int dfs(vector<vector<int>>& grid, int i, int j, int label) {
        int n = grid.size();
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1) {
            return 0;
        }
        grid[i][j] = label;
        int size = 1;
        size += dfs(grid, i + 1, j, label);
        size += dfs(grid, i - 1, j, label);
        size += dfs(grid, i, j + 1, label);
        size += dfs(grid, i, j - 1, label);
        return size;
    }
};