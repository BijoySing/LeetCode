class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        map<char, char> m1, m2;
        for (int i = 0; i < s.size(); i++) {
            if ((m1[s[i]] and m1[s[i]] != t[i]) ||(m2[t[i]] and m2[t[i]]!=s[i])) {
                return false;
            }
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        return true;
    }
};