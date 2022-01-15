class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=target)
                {
                    ans=min(ans,j-i+1);
                    break;
                }
            }
        }
        if(ans==INT_MAX)
            ans=0;
        return ans;
    }
};