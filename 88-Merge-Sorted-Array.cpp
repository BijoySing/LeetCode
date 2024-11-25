class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        for (int i = 0; i < n; i++) {
            num1[m+i]=num2[i];
        }
        sort(num1.begin(), num1.end());
    }
};