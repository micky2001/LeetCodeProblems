class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int count = 0;
        for(int i: nums){
            if(i == 0) count++;
            else temp.push_back(i);
        }
        while(count--) temp.push_back(0);
        nums = temp;
    }
};