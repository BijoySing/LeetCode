class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        
        // Step 1: Ignore leading whitespace
        while (i < n && s[i] == ' ')
            i++;
        
        // Step 2: Check for sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // Step 3: Read digits until the next non-digit character
        long long result = 0;
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Step 5: Clamp the result if it goes beyond the range
            if (result * sign < INT_MIN)
                return INT_MIN;
            if (result * sign > INT_MAX)
                return INT_MAX;
            
            i++;
        }
        
        // Step 4: Apply sign and return the result
        return result * sign;
    }
};