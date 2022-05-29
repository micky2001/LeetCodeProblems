class Solution {
public:
    
    int gcd(int a,int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int maxm = nums[0];
        int minm = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxm = max(nums[i],maxm);
            minm = min(nums[i],minm);
        }
        return gcd(maxm,minm);
    }
};