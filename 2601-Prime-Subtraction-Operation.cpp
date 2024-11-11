#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int> primes;
        for (int num = 2; num <= 1000; num++) {
            bool isPrime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(num);
            }
        }
        int bound = 0, largest;
        for (int i = 0; i < nums.size(); i++) {
            bound=0;
            if (i == 0) {
                bound = nums[i];
            } else {
                bound = nums[i] - nums[i - 1];
            }
            if (bound <= 0)
                return 0;
                largest=0;
            for (int j = bound-1; j > 1; j--) {
                if (find(primes.begin(), primes.end(), j) != primes.end()) {
                    largest = j;
                    break;
                }
            }
            nums[i] -= largest;
        }
        return 1;
    }
};
