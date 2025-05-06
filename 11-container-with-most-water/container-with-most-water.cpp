class Solution {
public:
    int maxArea(vector<int>& v) {
        int mx = 0;
        int n = v.size();
        int l = 0, r = n - 1;
        int ans = 0;
        while (l < r) {
            int x = r - l;
            int d = x * (min(v[l], v[r]));
            ans = max(d, ans);
            if (v[l] <= v[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
};