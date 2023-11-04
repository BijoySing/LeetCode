class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
      
        int time = 0;

     
        for (int pos : left) {
           time = max(time, pos);
        }
 for (int pos : right) {
        
            time = max(time, n - pos);
        }

        // The final 'time' variable contains the maximum time, which is when the last ant(s)
        // fall off the plank, so return it as the result.
        return time;
    }
};