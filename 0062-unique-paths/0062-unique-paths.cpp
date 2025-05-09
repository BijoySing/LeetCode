class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<long long>> g(m + 1, vector<long long>(n + 1, 0));
        g[1][0] = 1;
        g[0][1] = 1;

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                g[i][j] = g[i - 1][j] + g[i][j - 1];
            }
        }

        return g[m][n]/2;  // safe, will auto-convert to int
    }
};
