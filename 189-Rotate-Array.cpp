class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j = 0;

        int n = nums.size();
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            v[(i + k) % n]=nums[i];
        }
        for (auto u : v) {
            nums[j] = u;
            j++;
        }
    }
};