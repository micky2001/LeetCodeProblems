class Solution {
public:
  int check(vector<int>&arr)
    {
        int n = arr.size();
        int maxp=INT_MIN;
        int maxn=INT_MIN;;//a-i
        int minp=INT_MAX;;//a+i
        int minn=INT_MAX;;//a-i
        for(int i=0;i<n;i++)
        {
            maxp=max(maxp,arr[i]+i);
            maxn=max(maxn,arr[i]-i);
            minp=min(minp,arr[i]+i);
            minn=min(minn,arr[i]-i);
        }
        
        return max(abs(maxp-minp),abs(maxn-minn));
    }
    
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>add;
        vector<int>sub;
        int n = arr1.size();
        for(int i=0;i<n;i++)
            add.push_back(arr1[i]+arr2[i]);
        for(int i=0;i<n;i++)
            sub.push_back(arr1[i]-arr2[i]);
        
        return max(check(add),check(sub));
        
    }
};