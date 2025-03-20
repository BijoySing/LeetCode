class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++) {
            mp[v[i]] = i;
        }
        vector<int> ans;
        for (int i = 0; i < v.size(); i++) {
            int x = t - v[i];
            if (mp.count(x) and mp[x]!=i) {
                ans.push_back(mp[x]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};