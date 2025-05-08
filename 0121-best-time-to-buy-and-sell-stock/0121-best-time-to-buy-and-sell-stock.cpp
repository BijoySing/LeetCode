class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mx = 0;
        int by = p[0];
        for (int i = 1; i < p.size(); i++) {

            if (p[i] - by > mx) {
                mx = p[i] - by;
            }
            by=min(by,p[i]);
        }
        return mx;
    }
};