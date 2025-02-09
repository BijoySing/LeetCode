class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        vector<int> d;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int x = nums[i] - i;
            d.push_back(x);
        }
        map<int, int> mp;
        mp[nums[0]] = 1;
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            int p = mp[d[i]];
            cout << p << endl;
            ans += i- p;
            cout << "ans " << ans << endl;
            mp[d[i]]++;
        }
        return ans;
    }
};