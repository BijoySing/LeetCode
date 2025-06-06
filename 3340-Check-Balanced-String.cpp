class Solution {
public:
    bool isBalanced(string num) {
        int odd = 0;
        int even = 0;
        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            if (i % 2)
                odd += digit;
            else
                even += digit;
        }
        return even == odd;
    }
};