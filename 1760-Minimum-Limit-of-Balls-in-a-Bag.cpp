class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1, r = *max_element(nums.begin(), nums.end()), ans = r;

        while (l <= r) {
            int mid = (l + r) / 2, ops = 0;

            for (int n : nums) {
                ops += (n - 1) / mid;
                if (ops > maxOperations) break;
            }

            if (ops <= maxOperations) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
