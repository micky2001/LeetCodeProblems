class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
                return i;
        }
        return 0;
    }
};