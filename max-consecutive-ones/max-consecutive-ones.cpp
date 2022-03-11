class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,count=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                mx=(mx>count)?mx:count;
            }
            else if(nums[i]==0)
                count=0;
        }
        return mx;
    }
};