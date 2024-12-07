class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1, r = *max_element(nums.begin(), nums.end());
        int ans = r;
        while (l <= r) {
            int m = (l + r) / 2;
            int o = 0;
            for (auto u : nums) {
                int x = (u-1)/ m;
                o += x;
                if (o > maxOperations)
                    break;
            }

            if (o <= maxOperations) {
                ans = m;
                r = m - 1;

            } else
                l = m + 1;
        }
        return ans;
    }
};