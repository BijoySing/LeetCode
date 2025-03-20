class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v;
        map<string,vector<string>>mp;
        for(auto u:strs){
          string s=u;
          sort(u.begin(),u.end());
          mp[u].push_back(s);
        }
        vector<vector<string>>ok;
        for(auto [u,v]:mp){
          ok.push_back(v);
        }
        return ok;
    }
};