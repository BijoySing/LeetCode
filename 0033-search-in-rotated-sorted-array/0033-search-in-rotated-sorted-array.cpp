class Solution {
public:
    int search(vector<int>& v, int target) {
        auto it = find(v.begin(), v.end(), target);
        if (it != v.end())
            return it-v.begin();
        else
            return -1;
    }
};