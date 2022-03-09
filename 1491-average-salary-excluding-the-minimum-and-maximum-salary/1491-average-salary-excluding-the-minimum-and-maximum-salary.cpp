class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        
        int n=salary.size();
        int sum=0;
        for(int i=1;i<(n-1);i++)
            sum+=salary[i];
        double avg= (double)sum/(double)(n-2);
        return avg;
    }
};