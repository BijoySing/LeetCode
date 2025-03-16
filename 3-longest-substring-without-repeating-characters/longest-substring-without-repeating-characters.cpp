class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<char> st;
        map<char, int> mp;
        vector<int> v;
        int l = 0, r = 0, i = 0, ans = 0;
        for (int r = 0; r < n; r++) {
            while (st.count(s[r])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};