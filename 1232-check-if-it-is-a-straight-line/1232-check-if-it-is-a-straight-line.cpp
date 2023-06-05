class Solution {
public:
    double inf = std::numeric_limits<double>::infinity();

    bool checkStraightLine(vector<vector<int>>& v) {
            double x,y,a,b;
        double d;
            x=v[1][0]-v[0][0];
            y=v[1][1]-v[0][1];
        if(x) d = y/x;
        else d= inf;
        for(int i=1;i<v.size();i++)
        {
             a=v[i][0]-v[i-1][0];
             b=v[i][1]-v[i-1][1]; 
            cout<<a<<" "<<b<<endl;
            double m;
            if(a)m=b/a;
            else m= inf;
            if(m!=d)return false;
        }
        return true;
    }
};