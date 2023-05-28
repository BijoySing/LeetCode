class Solution {
public:
    double average(vector<int>& v) {
        sort(v.begin(),v.end());
        double n= v.size();
        double ans=0;
        for(int i=1;i<n-1;i++)ans+=v[i];
        return (ans/(n-2.0));
     }
};