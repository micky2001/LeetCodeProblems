class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v1, v2;
        v1 = nums;
        sort(nums.begin(), nums.end());
        int first = 0, second = n-1;
        while(first!=second)
        {
            int sum = nums[first] + nums[second];
            if(sum==target)
            break;
            else if(sum>target)
            second--;
            else
            first++;
        }
        for(int i=0;i<v1.size();++i)
        {
            if(v1[i]==nums[first])
                v2.push_back(i);
            else if(v1[i]==nums[second])
                v2.push_back(i);
        }
        return v2;
    }
};