class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int l = 0, r = a.size() - 1;
        while (l < r) {
            int sum = a[l] + a[r];
            if (sum == t) return {l + 1, r + 1};
            if (sum < t) l++;
            else r--;
        }
        return {};
    }
};
