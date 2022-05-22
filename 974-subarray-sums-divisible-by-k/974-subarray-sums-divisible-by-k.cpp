class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0]++;
        int curSum=0,count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            curSum += nums[i];
            int rem = curSum % k;
            if(rem < 0)
                rem+=k;
            if(map.count(rem)>0)
                count+=map[rem];
            map[rem]++;
        }
        
        return count;
    }
};