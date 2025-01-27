class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        sort(begin(str), end(str));
        string s = str[0];
        string ans = \\;
        for (int i = 0; i < s.size(); i++) {

            for (int j = 0; j < str.size(); j++) {
                if (s[i] != str[j][i]) {
                    return ans;
                }
            }
            ans += s[i];
        }
        return ans;
    }
};