class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        
        sort(v.begin(),v.end());
        int p=0,q=0;
        for(int i=0;i<v.size();i++){
            string s=v[i];
           // cout<<s<<endl;
            if(s[1]=='+'){
               // cout<<v[i][0]<<endl;
                p++;}
            else 
            {
                q++;}
        }
     //   cout<<p<<" "<<q<<endl;
        return p-q;
    }
};