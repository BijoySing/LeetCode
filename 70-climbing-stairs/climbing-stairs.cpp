class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int s[n + 1];

        s[1] = 1;
        s[2] = 2;
        for (int i = 3; i <= n; i++) {
            s[i] = s[i - 1] + s[i - 2];
        }
        return s[n];
    }
};