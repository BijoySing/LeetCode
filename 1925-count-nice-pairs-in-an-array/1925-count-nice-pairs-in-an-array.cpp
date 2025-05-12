class Solution {
public:
    int rev(int n) {
        int x = 0;
        while (n != 0) {
            x = x * 10 + (n % 10);
            n /= 10;
        }
        return x;
    }

    int countNicePairs(vector<int>& v) {
        map<int, long long> mp;
        int mod = 1000000007;

        for (int i = 0; i < v.size(); i++) {
            int x = v[i] - rev(v[i]);
            mp[x]++;
        }

        long long a = 0;
        for (auto [val, u] : mp) {
            a = (a + (1LL * u * (u - 1) / 2) % mod) % mod; 
        }

        return a;
    }
};
