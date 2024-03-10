class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        set<int> s1, s2;
        int n1 = v1.size();
        vector<int> x;
        int n2 = v2.size();
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (v1[i] == v2[j])
                    s1.insert(v1[i]);
            }
        }

        for (auto u : s1) {
            x.push_back(u);
        }
        return x;
    }
};