class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word ;
        stringstream ss(s);
        while(ss>>word){
            // cout<<word;
            v.push_back(word);
        }
        reverse(begin(v),end(v));
        word="";
int n=v.size();
int i=0;
        for (auto u : v) {
            // cout << u << " ";
            word += u;
            i++;
            if(i<n)            word+=' ';
        }
        return word;
    }
};