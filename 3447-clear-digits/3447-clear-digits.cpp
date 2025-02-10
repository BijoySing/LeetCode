class Solution {
public:
    string clearDigits(string s) {
        int c = 0;
        while (c < s.size()) {
            if (isdigit(s[c])) {
                s.erase(c, 1);
                
                if (c > 0) {
                    s.erase(c-1, 1);
                    c--;
                }
            } else {
                c++;
            }
        }return s;

    }
};