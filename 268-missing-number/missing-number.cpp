class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < ans; i++) {
            if (i != nums[i]) {
                ans = i;
            }
        }
        return ans;
    }
};