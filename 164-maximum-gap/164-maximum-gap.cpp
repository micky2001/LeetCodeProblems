class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxm=INT_MIN,diff=0;
        if(nums.size()==1)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            diff = abs(nums[i-1]-nums[i]);
            maxm = max(maxm,diff);
        }
        return maxm;
    }
};