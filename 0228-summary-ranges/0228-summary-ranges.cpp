class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        vector<string> v;
        int k = 0;
        string x = "->";
        int n = a.size();
        for (int i = 0; i < a.size(); i++) {
            string s = "";
            if (i < n - 1 and a[i] == a[i + 1] - 1) {
                k++;
            } else {
               if(k) s += (to_string(a[i] - k)),
                s += x;
                s += (to_string(a[i]));
                k = 0;
                v.push_back(s);
            }
        }
        return v;
    }
};