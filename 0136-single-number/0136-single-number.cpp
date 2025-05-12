class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto u : nums) {
          ans^=u;
        }
        return ans;
    }
};