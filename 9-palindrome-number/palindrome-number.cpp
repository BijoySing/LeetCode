class Solution {
public:
    bool isPalindrome(int x) {
     string s=to_string(x);
     string rs=s;
     reverse(begin(s),end(s));
     return s==rs;   
    }
};