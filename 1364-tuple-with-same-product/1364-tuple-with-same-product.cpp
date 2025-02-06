class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int ans = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                ans += productCount[product]++; // Adds combinations directly
            }
        }
        return ans * 8; // Each tuple can be arranged in 8 ways
    }
};
