class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (nums.size() == 1)
            return true;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > mx)
                return false;
            mx = max(mx, i + nums[i]);
            if (n-1 <= mx)
                return true;
        }
        return false;
    }
};