class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> v;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        vector<int> vis(v.size(), 0);
        long long ans = 0;
        for (int i = 0; i < v.size(); i++) {
            int val = v[i].first;
            int ind = v[i].second;

            if (vis[ind])
                continue;
            if (!vis[ind]) {
                ans += val;
                vis[ind] = 1;
                if (ind < n - 1) {
                    vis[ind + 1] = 1;
                } 
                if (ind > 0) {
                    vis[ind - 1] = 1;
                }
            }
        }
        return ans;
    }
}

;