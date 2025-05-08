class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto u : nums)
            mp[u]++;
        // sort(mp.begin(), mp.end());
        priority_queue<pair<int, int>> p;
        for (auto [u, v] : mp) {
            // cout << u << " " << v << endl;
            p.push({v, u});
        }
        vector<int> v;
        while (k-- and !p.empty()) {
            v.push_back(p.top().second);
            p.pop();
        }

        return v;
    }
};