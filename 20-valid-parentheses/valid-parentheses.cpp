class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            if (x == '(' || x == '[' || x == '{')
                t.push(x);
            else if (!t.empty()) {
                if (x == ')') {
                    if (!t.empty() and t.top() != '(')
                        return false;
                    else
                        t.pop();
                } else if (x == ']') {
                    if (!t.empty() and t.top() != '[')
                        return false;
                    else
                        t.pop();
                } else if (x == '}') {
                    if (!t.empty() and t.top() != '{')
                        return false;
                    else
                        t.pop();
                }
            }
            else return false;
        }
        if (t.size())
            return false;
        return true;
    }
};