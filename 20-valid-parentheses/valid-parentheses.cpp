class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        char c = ' ';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                if (ss.empty())
                    return false;
                c = ss.top();
                if (c != '(')
                    return false;
                ss.pop();
            } else if (s[i] == '}') {
                if (ss.empty())
                    return false;
                c = ss.top();
                if (c != '{')
                    return false;
                ss.pop();
            } else if (s[i] == ']') {
                if (ss.empty())
                    return false;
                c = ss.top();
                if (c != '[')
                    return false;
                ss.pop();
            } else
                ss.push(s[i]);
        }

        return ss.empty();
    }
};