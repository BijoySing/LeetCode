class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        
        int n=a.size();
        sort(a.begin(),a.end());
        int d=a[1]-a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]==d)continue;
            else return false;
        }
        return true;
        
        
        
    }
};