class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int ans=0;
        for (int i = 0; i < n; i++) {
            string s=words[i];
            int pos=s.find(pref);
            if(pos==0){
                ans++;
            }
        }
        return ans;
    }
};