class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < (nums.size()>>1); i++){
            ans = max(ans,nums[i]+nums[nums.size()-1-i]);
        }
        return ans;
    }
};