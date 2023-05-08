class Solution {
public:
        

        int countPrimes(int n) {
    if (n <= 2) return 0;

    vector<bool> isPrime(n, true);
    int count = n - 2;  // exclude 0 and 1

    for (int i = 2; i * i < n; i++) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j < n; j += i) {
            if (isPrime[j]) {
                isPrime[j] = false;
                count--;
            }
        }
    }

    return count;
}

    
};