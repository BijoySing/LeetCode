class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int id=0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i+1)%n]) {
                id++;
            }
            if(id>1)return false;
        }
        return true;
    }
};