class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int j = 0;
        multiset<int> s;

        for (int i = 0; i < n; ++i) {
            s.insert(nums[i]);
            while (*s.rbegin() - *s.begin() > 2) {
                s.erase(s.find(nums[j++]));
            }
            ans += i - j + 1;
        }

        return ans;
    }
};
