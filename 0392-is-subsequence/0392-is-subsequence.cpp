class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sz=s.size();
        int tz=t.size();
        int j=0,c=0;
        for(int i=0;i<sz;i++){
            while(j<tz){
               // cout<<j<<endl;
                if(s[i]==t[j]){
                    c++;
                    j++;
                    break;
                }
                j++;
            }
        }
        //cout<<"c=="<<c<<endl;
        if(c==sz)return true;
        else return false;
        
    }
};