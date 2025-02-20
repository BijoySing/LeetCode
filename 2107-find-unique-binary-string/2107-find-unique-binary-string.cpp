class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> numSet(nums.begin(), nums.end()); // Store given numbers

        for (int i = 0; i < (1 << n); i++) { // Iterate through all 2^n binary numbers
            string binaryStr = bitset<16>(i).to_string().substr(16 - n); // Convert to n-bit binary
            if (numSet.find(binaryStr) == numSet.end()) { // If not found in given set
                return binaryStr;
            }
        }
        return "";
    }
};
