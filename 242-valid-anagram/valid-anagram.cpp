class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1,m2;
        for(auto u:s)m1[u]++;
        for(auto u:t)m2[u]++;
        if(s.size() !=t.size())return false;
        for(auto [x,y]:m1){
          if(m1[x]!=m2[x])return false;
        }
        return true;
    }
};