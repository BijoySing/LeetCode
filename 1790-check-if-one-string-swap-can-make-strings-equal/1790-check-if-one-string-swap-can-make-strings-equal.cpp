class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
       if (s1 == s2) {
        return true;
    }
    
    int count = 0;
    int index1 = -1;
    int index2 = -1;
    
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            count++;
            if (count == 1) {
                index1 = i;
            } else if (count == 2) {
                index2 = i;
            } else {
                return false;
            }
        }
    }
    
    if((count == 2) && (s1[index1] == s2[index2]) && (s1[index2] == s2[index1]))return true;
        else return false;
}
};
