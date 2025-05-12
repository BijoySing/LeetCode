class Solution {
public:
    bool ck(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int a = 0;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + mx; j < n; j++) {
                if (ck(s, i, j) && (j - i + 1) > mx) {
                    a = i;
                    mx = j - i + 1;
                }
            }
        }
        return s.substr(a, mx);
    }
};