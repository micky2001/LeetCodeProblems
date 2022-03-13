class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stak;
vector<int> res;
map<int,int> mp;

	for(int i=0;i<nums2.size();i++)
	{
		while(stak.size() > 0 && nums2[i] > stak.top())
		{
			mp.insert(pair<int,int>(stak.top(),nums2[i]));
			stak.pop();
		}

		stak.push(nums2[i]);
	}
 for(int i =0;i<nums1.size();i++)
 {
	 int val = mp[nums1[i]];
	 if (val == 0)
		 res.push_back(-1);
	 else
		 res.push_back(val);

 }

return res;
    }
};