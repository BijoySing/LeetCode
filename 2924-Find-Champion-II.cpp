class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> in_degree(n, 0);

        for (auto edge : edges) {
            int u = edge[0], v = edge[1];
            in_degree[v]++;
        }
        
        int champion = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (in_degree[i] == 0) {
                champion++;
                ans = i;
            }
        }
        if (champion > 1)
            return -1;
        else
            return ans;
    }
};