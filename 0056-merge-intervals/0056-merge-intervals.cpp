class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>> a;
        a.push_back(v[0]);
        for (int i = 0; i < v.size(); i++) {
            vector<int> x = v[i];
            if (a.back()[1] < x[0]) {
                a.push_back(x);
            }
            else{
              a.back()[1]=max(x[1],a.back()[1]);
            }
        }
        return a;
    }
};