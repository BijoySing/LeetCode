class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i]) {
                nums[c++] = nums[i];
            }
        }
        while (c< n)nums[c]=0,c++;
    }
};