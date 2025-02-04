
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0], curSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                curSum += nums[i];
            } else {
                maxSum = max(maxSum, curSum);
                curSum = nums[i];
            }
        }
        return max(maxSum, curSum);
    }
};