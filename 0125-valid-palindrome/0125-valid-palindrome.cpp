#include <iostream>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string ss = "";
        for (auto u : s) {
            int x=u;
            char c= std::tolower(u);
            x=c;
            if((x>96 && x<123) || (x>47 && x<58))ss+=c;
        }
        std::cout << ss << std::endl;
        for(int i=0;i<ss.size();i++){
            if(ss[i]!=ss[ss.size()-1-i])return false;
        }

        return true;  // Placeholder, modify as needed
    }
};

