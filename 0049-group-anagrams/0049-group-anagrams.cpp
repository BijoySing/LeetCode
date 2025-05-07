class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for (auto u : strs) {
            string s = u;
            sort(s.begin(), s.end());
            mp[s].push_back(u);
        }
        vector<vector<string>>v;
        for(auto[x,y]:mp){
          v.push_back(y);
        }
        return v;
    }
};