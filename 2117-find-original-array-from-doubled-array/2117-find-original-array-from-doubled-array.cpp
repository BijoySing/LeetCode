class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() % 2 != 0)
            return {};

        map<int, int> mp;
        vector<int> v;
        sort(changed.begin(),changed.end());
        for (auto u : changed) {
            mp[u]++;
        }
        for (auto u : changed) {
            if (mp[u] == 0)
                continue;
            if (mp[2 * u] == 0)
                return {};
            v.push_back(u);
            mp[u]--;
            mp[2 * u]--;
        }
        return v;
    }
};//done