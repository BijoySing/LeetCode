#include <unordered_set>

class Solution {
public:
    int sod(int n) {
        int s = 0;
        while (n != 0) {
            int d = n % 10;
            s += (d * d);
            n /= 10;
        }
        return s;
    }

    bool isHappy(int n) {
        std::unordered_set<int> seen; // To detect cycles
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n); 
                        n = sod(n);     // Update n to the sum of squares of its digits
        }
        return n == 1; // Return true if n is 1, otherwise false
    }
};