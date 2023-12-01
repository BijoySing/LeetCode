class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1="",s2="";
        for(auto u:word1)s1+=u;
        for(auto u:word2)s2+=u;
        if(s1==s2)return true;
    else
        return false;}
};