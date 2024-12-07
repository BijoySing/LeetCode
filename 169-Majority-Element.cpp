class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> vote;
        int mx = 0, ans = 0;
        for (auto v : nums) {
            vote[v]++;
            if (vote[v] > mx) {
                mx = vote[v];
                ans = v;
            }
        }
        return ans;
    }
};