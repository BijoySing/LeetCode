class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
            int columns = v[0].size();
        int c=0;
            int rows = v.size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(v[i][j]<0)c++;
            }
        }
        return c;

        
    }
};