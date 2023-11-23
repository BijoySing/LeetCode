class Solution {
public:
 
    bool check(vector<int>sub){
        
         sort(sub.begin(),sub.end());
         int diff = sub[1]-sub[0];
         for(int i=2;i<sub.size();i++){
             int diff1 = sub[i]-sub[i-1];
             if(diff!=diff1){
                 return false;
             }
         }
            return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
           vector<int> sub(nums.begin() + l[i], nums.begin() + r[i] + 1);
            ans.push_back(check(sub));
        }
        return ans;
    }
};