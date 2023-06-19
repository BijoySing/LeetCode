class Solution {
public:
    int largestAltitude(vector<int>& v) {
      int mx=0,x=0;
    for(int i=0; i<v.size(); i++)
    {
        x=x+v[i];
        mx=max(x,mx);



    }
     return mx;



    }
};