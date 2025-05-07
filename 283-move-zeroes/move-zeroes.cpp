class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int>v;
        int n = nums.size();
        int c = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i]) {
                v.push_back(nums[i]);c++;
            }
        }
        while (c< n)v.push_back(0),c++;
        nums.clear();
        nums=v;
    }
};