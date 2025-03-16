class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& bd) {
        // vector<pair<int, int>> v = {{8, 8}, {8, 5}, {8, 2}, {5, 8}, {5, 5},
        // {5, 2}, {2, 8}, {2, 5}, {2, 2}};
        vector<pair<int, int>> v = {{2, 2}, {2, 5}, {2, 8}, {5, 2}, {5, 5},
                                    {5, 8}, {8, 2}, {8, 5}, {8, 8}};
        int c = 0;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (bd[i][j] != '.') {
                    int x, y;
                    int val = bd[i][j];
                    // check sub-box
                    for (auto [a, b] : v) {
                        if (i <= a and j <= b) {
                            // cout << a << b <<endl;
                            x = a, y = b;
                            c++;
                            break;
                        }
                    }
                    for (int k = x - 2; k <= x; k++) {
                        for (int l = y - 2; l <= y; l++) {
                            if (k == i and l == j)
                                continue;
                            if (bd[k][l] == val)
                                return false;
                        }
                    }
                    for (int k = 0; k < 9; k++) {
                        if (k == j)
                            continue;
                        if (bd[i][k] == val)
                            return false;
                    }
                    for (int k = 0; k < 9; k++) {
                        if (k == i)
                            continue;
                        if (bd[k][j] == val)
                            return false;
                    }
                }
            }
        }
        // cout << c << endl;
        return true;
    }
};