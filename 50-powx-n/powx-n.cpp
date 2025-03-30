class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        if (nn < 0) {
            x = 1 / x;
            nn = -nn;
        }
        double ans = 1.0;
        for (; nn > 0; nn /= 2) {
            if (nn % 2)
                ans *= x;
            x *= x;
        }
        return ans;
    }
};
