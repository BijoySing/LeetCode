class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char, int> r, m;
        for (auto u : mag)
            m[u]++;
        for (auto u : ran)
            r[u]++;
            if(r.size()>m.size())return false;
        for (auto [u, v] : r) {
            if (r[u] > m[u])
                return false;
        }
        return true;
    }
};