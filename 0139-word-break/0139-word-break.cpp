class Solution {
public:
    bool wordBreak(string s, vector<string>& wd) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for (int i = 1; i <= s.size(); i++) {
            for (auto w : wd) {
                int id = i - w.size();
                if (id >= 0 and dp[id] and s.substr(id, w.size()) == w) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};