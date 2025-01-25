class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int g=0;
        unordered_map<int,int>gname;
        gname[v[0]]=g;
        unordered_map<int,list<int>>glist;
        glist[g].push_back(v[0]);
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1])>limit){
                g++;
            }
            gname[v[i]]=g;
            glist[g].push_back(v[i]);

        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int x=nums[i];
            int gp=gname[x];
            ans[i]=*(glist[gp].begin());
            glist[gp].pop_front();
        }

return ans;
    }
};