class Solution {
public:
    bool ck(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] !=s[r])
                return false;
                l++;r--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int mx = 0;
        int c=0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (ck(s, i, j)) {
                  
                    c++;
                }
            }
        }
        return c;
    }
};