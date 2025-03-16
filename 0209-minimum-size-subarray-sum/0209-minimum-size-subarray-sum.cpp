class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        int n = a.size();
        int i;
        int s = 0;
        int ans = INT_MAX;

        int l = 0, r = 0;
        for ( r = 0; r < n; r++) {
            s += a[r];
            while (s >= t) {
                ans = min(ans, r - l+1);

                s -= a[l];
                l++;
            }
        }
        return ans==INT_MAX ? 0:ans;
    }
};