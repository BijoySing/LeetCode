class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for (char& c : s) {
            c = ::tolower(c);
        }
        string s1 = \\;
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                s1 += s[i];
            }
        }
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};