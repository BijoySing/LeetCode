class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int mx = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            while (st.count(s[i])) {
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            mx = max(mx, (int)st.size());
            for(auto u:st)cout<<u;
            cout<<endl;

        }
        return mx;
    }
};