class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        int n = v1.size(), m = v2.size();
        int i = 0, j = 0;
        vector<int> v;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        while (i < n and j < m) {
            if (v1[i] == v2[j]) {
                v.push_back(v1[i]);

                i++;
                j++;
            } else if (v1[i] < v2[j]) {
                i++;
            } else
                j++;
        }
        return v;
    }
};