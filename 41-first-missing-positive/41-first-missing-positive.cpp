class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
		vector<int> v(size, -1); 
		for (int i = 0; i < size; i++) {
			if (nums[i] > 0 && nums[i] <= size)
				v[nums[i] - 1] = 1; 
		}

		for (int i = 0; i < size; i++) {
			if (v[i] == -1)
				return i + 1;
		}

		return size + 1;
    }
};