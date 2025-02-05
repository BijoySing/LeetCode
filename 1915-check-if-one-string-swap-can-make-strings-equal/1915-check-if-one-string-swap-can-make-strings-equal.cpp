class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int f = 0;
        string x = "", y = "";
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                f++;
                x += s1[i];
                y += s2[i];
            }
        }
        reverse(begin(y),end(y));
        if(f>2)return false;
        else{
            return x==y;

        }
    }
};