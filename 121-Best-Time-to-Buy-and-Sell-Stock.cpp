class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> suf;
        int n = prices.size();
        int x = 0;
        int d = 0;
        for (int i = n - 1; i >= 0; i--) {
            x = max(x, prices[i]);
            suf.push_back(x);
            cout << x << \ \;
        }
        reverse(suf.begin(), suf.end());
        for (int i = 0; i < n-1; i++) {
            int x = suf[i + 1] - prices[i];
            d=max(d,x);
        }
        return d;
    }
};