class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr(n,0);
        
        for(int i=0;i<n;i++)
        {
            arr[nums[i]-1]++;
        }
        vector<int> v;
        for(int i=0;i<n;i++)
            if(arr[i]==2)
                v.push_back(i+1);
        return v;
    }
};