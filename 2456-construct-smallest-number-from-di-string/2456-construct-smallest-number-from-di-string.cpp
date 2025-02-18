class Solution {
public:
    bool ck(string s, string p) {
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == 'I' and s[i] > s[i + 1]) {
                return false;
            }
            else if (p[i] == 'D' and s[i] < s[i + 1]) {
                return false;
            }

        }
        return true;
    }
    string smallestNumber(string p) {
        string n = "123456789", s = "";
        for (int i = 0; i <= p.size(); i++) {
            s += n[i];
        }
        bool f = false;
        string ans;

        do {
            if (ck(s, p)) {
                f = true;
                cout << s << endl;
                ans=s;
                break;
            }
            // cout << s << endl;

        } while (next_permutation(s.begin(), s.end()));
        return ans;
    }
};