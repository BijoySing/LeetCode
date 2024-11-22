class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        // int row = matrix.size();
        // int col = matrix[0].size();
        map<string, int> mp;

        for (auto row : matrix) {
            int first = row[0];
            string canonical = "";
            for (int i = 0; i < row.size(); i++) {
                if (first == row[i])
                    canonical += '1';
                else
                    canonical += '0';
            }
                    mp[canonical]++;

        }
        int mx = 0;
        for (auto val : mp) {
            mx = max(val.second, mx);
        }
        return mx;
    }
};