class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left[n],right[n];
        left[0]=0, right[n-1]=0;
        int res = 0;
        
        for(int i=0;i<n;i++)
        {
            if(i != n-1)
                left[i+1] = max(left[i],height[i]);
            int j = n-1-i;
            if(j != 0)
                right[j-1] = max(right[j],height[j]);
        }
        
        for(int i=0;i<n;i++)
        {
            left[i] = min(left[i],right[i])-height[i];
            if(left[i]>0) 
                res +=  left[i];
        }
        
        return res;
    }
};