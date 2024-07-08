class Solution {
public:
    void solve(vector<int>& nums, vector<int>& a, int freq[], vector<vector<int>>& ans) {
        if(a.size() == nums.size()) {
            ans.push_back(a);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(freq[i] == 0) {
                freq[i] = 1;
                a.push_back(nums[i]);
                solve(nums, a, freq, ans);
                a.pop_back();
                freq[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>a;
        int freq[nums.size()];
        for(int i = 0; i < nums.size(); i++) {
            freq[i] = 0;            
        }
        vector<vector<int>>ans;
        solve(nums, a, freq, ans);
        return ans;
    }
};