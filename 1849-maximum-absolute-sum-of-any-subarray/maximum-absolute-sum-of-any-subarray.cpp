class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int mx = a[0];
        int ans =abs(a[0]);
        int n = a.size();
        int mn = a[0];
        for (int i = 1; i < n; i++) {
            // cout << mx << endl;

            mx = max(mx + a[i], a[i]);
            mn = min(mn + a[i], a[i]);
            ans = max(ans, max(abs(mn), abs(mx)));
        }
        return ans;
    }
};