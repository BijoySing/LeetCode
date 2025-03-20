class Solution {
public:
    bool wordPattern(string p, string s) {
        map<string, char> m;
        stringstream ss(s);
        string w;
        vector<string> v;
        while (ss >> w) {
            cout << w << endl;
            v.push_back(w);
        }
        if (v.size() != p.size())
            return false;
        map<string, char> m1;
        map<char, string> m2;
        for (int i = 0; i < v.size(); i++) {
            if ((m1[v[i]] and m1[v[i]] != p[i]) ||
                (m2.count(p[i]) and (m2[p[i]] != v[i]))) {
                return false;
            }
            m1[v[i]] = p[i];
            m2[p[i]] = v[i];
        }
        return true;
    }
};