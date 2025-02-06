class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int p = nums[i] * nums[j];
                mp[p]++;
                // cout << p << " ";
            }
        }
        int ans = 0;
        for (auto [x, y] : mp) {
            if (y > 1) {
                int s= (y - 1) * y / 2;
                ans+=s;
            }
        }
        return ans*8;
    }
};