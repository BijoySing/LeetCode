class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int f = 0, c = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ' and f) {
                break;
            }
            if (s[i] != ' ') {
                c++;
                f = 1;
            }
        }
        return c;
    }
};