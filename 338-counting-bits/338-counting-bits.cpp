class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int count=0;
            int num=i;
            while(num)
            {
                num&=(num-1);
                count++;
            }
            v.push_back(count);
        } 
        return v;
    }
};