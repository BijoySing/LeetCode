class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            bool isConsecutive = true;
            int maxVal = nums[i];

            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] + 1 != nums[j + 1]) {
                    isConsecutive = false;
                    break;
                }
                maxVal = max(maxVal, nums[j + 1]);
            }

            ans.push_back(isConsecutive ? maxVal : -1);
        }

        return ans;
    }
};
