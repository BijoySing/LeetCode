class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        set<string>s;
        for(auto u:bannedWords){
            s.insert(u);
        }
        int c=0;
        for(auto u:message){
            if(s.count(u))c++;
        }
        if(c>1)return true;
        else return false;
    }
};