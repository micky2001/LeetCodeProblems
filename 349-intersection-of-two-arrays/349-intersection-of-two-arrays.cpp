class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        set<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                v.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
        }
        vector<int> v2;
        for(auto itr=v.begin();itr!=v.end();itr++)
            v2.push_back(*itr);
        return v2;
    }
};