class Solution {
public:
    void rotate(vector<vector<int>>& mm) {
        int n = mm.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
                  vector<int> v;

            for (int j = 0; j <n; j++) {
              v.push_back(mm[j][i]);
              // cout<<mm[j][i]<<" ";
            }
            reverse(v.begin(),v.end());
            ans.push_back(v);
            cout<<endl;
        }mm.clear();
        mm=ans;
    }
};