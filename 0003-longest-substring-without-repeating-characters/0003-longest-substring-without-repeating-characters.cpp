class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> st;
        int mx = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            while (st.count(s[i])) {
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            mx = max(mx, (int)st.size());
        }
        return mx;
    }
};