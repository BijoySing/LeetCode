class Solution {
public:
    int setbit(int num) {
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }

    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        
        // Iterate and only swap adjacent elements with the same set bit count if needed
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (nums[j] > nums[j + 1] && setbit(nums[j]) == setbit(nums[j + 1])) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        
        // Check if the array is sorted
        return is_sorted(nums.begin(), nums.end());
    }
};
