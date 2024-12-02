class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
      stringstream ss(sentence);
    string word;
    int index = 1; // 1-indexed position

    while (ss >> word) {
        // Check if searchWord is a prefix of the current word
        if (word.find(searchWord) == 0) {
            return index; // Return 1-indexed position
        }
        index++;
    }
    return -1; }// No matching word fou
};