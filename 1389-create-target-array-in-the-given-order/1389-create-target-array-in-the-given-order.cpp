class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            v.insert(v.begin()+index[i],nums[i]);
        }
        v.resize(nums.size());
        return v;
    }
};