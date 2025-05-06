class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        int pre=INT_MIN;
        for(auto u:nums)s.insert(u);
        int ans=0,cnt=0;
        for(auto u:s){
          if(u!=pre+1){
            ans=max(ans,cnt),cnt=0;
          }
          cnt++;
          pre=u;
        }
        ans=max(ans,cnt);
        return ans;

    }
};