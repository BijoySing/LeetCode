class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int n = b.size();
        int m = b[0].size();
        int d[8][2] = {
            {-1, -1}, {-1, 0}, {-1, 1}, // Top-left, Top, Top-right
            {0, -1},  {0, 1},           // Left,       Right
            {1, -1},  {1, 0},  {1, 1}   // Bottom-left, Bottom, Bottom-right
        };
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int on = 0, z = 0;

                for (int k = 0; k < 8; k++) {
                    int x = i + d[k][0];
                    int y = j + d[k][1];
                    if (x >= 0 && x < n && y >= 0 && y < m)
                        if (b[x][y])
                            on++;
                        else
                            z++;
                }
                if (b[i][j]) {
                    if (on < 2 || on > 3)
                        v.push_back({i, j});
                } else {
                    if (on == 3)
                        v.push_back({i, j});
                }
                // cout << on << " " << z << endl;
            }
        }
        for(auto [x,y]:v){
          if(b[x][y]){
            b[x][y]=0;
          }
          else b[x][y]=1;
        }
    }
};