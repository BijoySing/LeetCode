class Solution {
public:
    int sum(int s) {
        int d = 0;
        while (s != 0) {
            d += s % 10;
            s /= 10;
        }
        return d;
    }
    int maximumSum(vector<int>& nums) {
        map<int, int> mp;
        int ans=-1;

        for (auto u : nums) {
            int d = sum(u);
            if (mp.count(d)) {
                ans = max(mp[d]+u, ans);
            }
            mp[d]=max(u,mp[d]);
        }
        return ans;
    }
};