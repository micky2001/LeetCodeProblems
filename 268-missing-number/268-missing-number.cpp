class Solution {
public:
    int missingNumber(vector<int>& v) {
        int sum =0,tsum;
        for(auto i=v.begin();i!=v.end();i++)
        {
            sum += *i;
        }
        int n = v.size();
        tsum = (n*(n+1))/2;
        return (tsum-sum);
    }
};