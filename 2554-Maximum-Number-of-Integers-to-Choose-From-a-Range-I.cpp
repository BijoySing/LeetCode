class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int, int> mp;
        for (int i = 0; i < banned.size(); i++) {
            mp[banned[i]]++;
        }
        long long int sum = 0, i, count = 0;
        bool f = false;
        for (i = 1; i <= n; i++) {
            // cout << mp[i] << " ";
            if (mp[i] == 0 and maxSum >= sum + i) {
                sum += i;
                count++;
                f = true;
                cout << i << " ";
            }
            if (i > maxSum)
                break;
        }
        return f ? count : 0;
    }
};