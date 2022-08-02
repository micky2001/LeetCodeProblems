class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
            
        for(int i = 0, index = 0; i < nums.size(); i++) {
            if(nums[i]%2==0) {
                swap(nums[i], nums[index]);
                index++;
            }
        }
        
        return nums;
    }
};