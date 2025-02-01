class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gSum = accumulate(begin(gas), end(gas), 0);
        int cSum = accumulate(begin(cost), end(cost), 0);
        if (gSum < cSum)
            return -1;
        
        int total_tank = 0, curr_tank = 0, start_index = 0;
        for (int i = 0; i < gas.size(); i++) {
            total_tank += gas[i] - cost[i];
            curr_tank += gas[i] - cost[i];            
            if (curr_tank < 0) {
                start_index = i + 1;
                curr_tank = 0;
            }
        }        
        return (total_tank >= 0) ? start_index : -1;
    }
};
