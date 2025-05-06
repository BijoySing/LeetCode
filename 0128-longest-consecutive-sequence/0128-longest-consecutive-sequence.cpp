class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        map<int, int> mp;
        vector<int> v;
        for (auto u : nums) {
            mp[u]++;
        }
        int mx = 0;
        for (auto [x, y] : mp) {
            v.push_back(x);
            // cout<<x<<" ";
        }
        cout<<endl;
        if (v.size() == 1)
            return 1;
        int j = 1, d;
        for (int i = 0; i < v.size();) {
            if (j < v.size())
                d = v[j] - v[i];
            // cout << v[j] << " " << v[i] << endl;
            if (d == j - i) {
                mx = max(d + 1, mx);
                j++;
            } else {
                i++;
            }
            // cout << "mx " << mx << endl;
        }
        return mx;
    }
};