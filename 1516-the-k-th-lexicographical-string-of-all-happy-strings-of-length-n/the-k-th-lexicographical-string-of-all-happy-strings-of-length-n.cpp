#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    string getHappyString(int n, int k) {
        queue<string> q;
        q.push("a");
        q.push("b");
        q.push("c");
        vector<string> happyStrings;
        
        while (!q.empty()) {
            string s = q.front();
            q.pop();
            if (s.size() == n) {
                happyStrings.push_back(s);
                continue;
            }
            for (char ch : {'a', 'b', 'c'}) {
                if (s.back() != ch) {
                    q.push(s + ch);
                }
            }
        }
        return k > happyStrings.size() ? "" : happyStrings[k - 1];
    }
};
