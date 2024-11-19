
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> s;
        int n = nums.size();
        long long sum = 0;
        long long mx = 0;

        int j = 0;
        for (int i = 0; i < n; i++) {
            while (s.count(nums[i])) {
                sum -= nums[j];
                s.erase(nums[j]);
                j++;
            }

            s.insert(nums[i]);
            sum += nums[i];

            if (s.size() == k) {
                mx = max(mx, sum);
                sum -= nums[j];
                s.erase(nums[j]);
                j++;
            }
        }
        return mx;
    }
};
