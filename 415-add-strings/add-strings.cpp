class Solution {
public:
    string addStrings(string num1, string num2) {
        while (num1.size() < num2.size())
            num1 = '0' + num1;
        while (num1.size() > num2.size())
            num2 = '0' + num2;
        // cout << num1 << endl;
        // cout << num2 << endl;
        int n = num1.size();
        string ans = "";
        int d1 = num1[n - 1] - '0';
        int d2 = num2[n - 1] - '0';
        int sum = d1 + d2;
        int carry = sum / 10;

        ans += (sum % 10) + '0';
        for (int i = num1.size() - 2; i >= 0; i--) {
            d1 = num1[i] - '0';
            d2 = num2[i] - '0';
            sum = d1 + d2 + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
        }
        if(carry)ans +=carry+ '0';

        reverse(ans.begin(), ans.end());
        return ans;
    }
};