class Solution {
public:
    bool isSubstringPresent(string s) {
        vector<string> v;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        string s1 = v[i];
        reverse(s1.begin(), s1.end());
        for (int j = 0; j < v.size(); j++)
        {
           
            if (s1 == v[j])
                return true;
        }
    }
    return false;
    }
};