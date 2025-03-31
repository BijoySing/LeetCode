class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n = d.size();
        vector<int> v;
        int x = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (d[i] < 9) {
                x = i;
                break;
            }
        }
        if (x == -1) {
            v.push_back(1);
            for (int j = 0; j < n; j++) {
                v.push_back(0);
            }
        } else {
            for (int j = 0; j < x; j++) {
                v.push_back(d[j]);
            }
            v.push_back(d[x] + 1);
            for (int j = x + 1; j < n; j++) {
              if(d[j]==9)v.push_back(0);
            }
        }
        return v;
    }
};