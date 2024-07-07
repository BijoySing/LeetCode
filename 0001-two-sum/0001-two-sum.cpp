class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        pair<int,int>a[n];
        vector<int>v;
        int x,y;
        x=0;
          for(int k=0; k<n; k++)
        {
            a[k].first=nums[k];
            a[k].second=k;
        }
         sort(a,a+n);
        int l=0;//a[0].first;
        int  r=n-1;//=a[n-1].first;
         while(l<r)
        {
            int q=a[l].first+a[r].first;;
           // ck(q);
            if(q==target)
            {

            v.push_back(a[l].second);
            v.push_back(a[r].second);break;

            }
            else if(q<target)
            {
                l++;
            }
            else r--;//=a[k--].first;

        }
                    return v;

    }
        
    
};