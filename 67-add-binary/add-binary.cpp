class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size() - 1;
        int m = b.size() - 1;
        string s = "";
        int c = 0, x = 0;
        while (n >= 0 || m >= 0 || c > 0) {
          x=c;
            if (n >= 0) {
                x += a[n] - '0';
                n--;
            }
            if (m >= 0) {
                x += b[m] - '0';
                m--;
            }
            s += to_string(x % 2);
            c = x / 2;
        }
        // cout << s << endl;
        reverse(s.begin(),s.end());
        return s;
    }
};