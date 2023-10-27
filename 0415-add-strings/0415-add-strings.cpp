class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
    string result;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        sum %= 10;
        result = to_string(sum) + result;
    }

    return result;
    }
};