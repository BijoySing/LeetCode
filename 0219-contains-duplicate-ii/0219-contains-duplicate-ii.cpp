class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         std::unordered_map<int, int> index_dict;
    for (int i = 0; i < nums.size(); i++) {
        if (index_dict.find(nums[i]) != index_dict.end() && abs(i - index_dict[nums[i]]) <= k) {
            return true;
        }
        index_dict[nums[i]] = i;
    }
    return false;
        
        
    }
};