class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        long long x = 0;
        int c=0;
        for (int i = 0; i < n-1; i++) {
            x += nums[i];
            long long y = sum - x;
            if (x >= y)
                c++;
        }
        return c;
    }
};