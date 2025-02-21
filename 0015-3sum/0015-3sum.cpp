class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        set<vector<int>> st; // To store unique triplets
        
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int x = -(nums[i] + nums[j]); // Find the third number
                
                if (binary_search(nums.begin() + j + 1, nums.end(), x)) {
                    st.insert({nums[i], nums[j], x});
                }
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};
