#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Insert all numbers into a hash set for O(1) lookups
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0; // To store the maximum sequence length

        // Iterate through each number in the set
        for (int num : numSet) {
            // Check if num is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentLength = 1;

                // Count the length of the sequence
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentLength++;
                }

                // Update maxLength if the current sequence is longer
                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};