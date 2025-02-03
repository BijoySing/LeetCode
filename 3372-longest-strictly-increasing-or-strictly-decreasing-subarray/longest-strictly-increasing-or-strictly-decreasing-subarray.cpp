class Solution {
public:
    int longestMonotonicSubarray(vector<int>& a) {
        int in = 1;
        int de = 1;
        int ans = 1;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] < a[i + 1]) {
                in++;
                de = 1;
            }
            else if (a[i] > a[i + 1]) {
                de++;
                in = 1;
            } else {
                de = 1;
                in = 1;
            }
            ans = max({in, de, ans});
        }
        return ans;
    }
};