class Solution {
public:
    bool isCircularSentence(string sentence) {
        int len = sentence.size();
        if (sentence[0] != sentence[len - 1])
            return false;
        for (int i = 0; i < len; i++) {
            if (sentence[i] ==' ' and sentence[i-1] != sentence[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
