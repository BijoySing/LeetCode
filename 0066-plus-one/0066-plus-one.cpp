class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        
        // Traverse from the last digit backward
        for (int i = size - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
