class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        for (int i = 1; i <= n; i++) {
            bitset<18> bit(i);
            int c = 0;
            for (int j = 0; j <= 18; j++) {
                if (bit[j])
                    c++;
            }
            v.push_back(c);
        }
        return v;
    }
};