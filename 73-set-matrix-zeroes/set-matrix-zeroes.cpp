class Solution {
public:
    void setZeroes(vector<vector<int>>& mm) {
        int n = mm.size();
        int m = mm[0].size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mm[i][j] == 0) {
                    v.push_back({i, j});
                }
            }
        }
        for (auto [i, j] : v) {
            for (int k = 0; k < n; k++) {
                mm[k][j] = 0;
            }
            for (int k = 0; k < m; k++) {
                mm[i][k] = 0;
            }
        }
    }
};