class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        int n = v.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int s = -(v[i] + v[j]);
                vector<int> vv;
                if (binary_search(v.begin() + j + 1, v.end(), s)) {
                    st.insert({v[i], v[j], s});
                }
            }
        }
        for (auto u : st) {
            ans.push_back(u);
        }
        return ans;
    }
};