class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        for (int i = 0; i < str1.size() && j < str2.size(); i++) {
            char nextChar;
            if (str1[i] == 'z') {
                nextChar = 'a';
            } else {
                nextChar = str1[i] + 1;
            }
            if (str2[j] == str1[i] || str2[j] == nextChar) {
                j++;
            }
        }
        if (j == str2.size()) {
            return true;
        } else {
            return false;
        }
    }
};
