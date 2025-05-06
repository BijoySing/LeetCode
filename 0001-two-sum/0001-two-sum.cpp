class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        map<int, int> mp;
        int i = 0;
        for (auto u : nums) {
            mp[u] = i++;
        }
        vector<int>v;

        for (int i = 0; i < nums.size(); i++) {
            int n = t - nums[i];
            if (mp[n] and mp[n]!=i) {
                v.push_back(i);
                v.push_back(mp[n]);
                break;
            }
        }
        return v;
    }
    };