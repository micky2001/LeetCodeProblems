class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int max_bal = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            int bal = 0;
            
            for(int j=0;j<m;j++)
            {
                bal += accounts[i][j];
            }
            max_bal = max(max_bal, bal);
        }
        
        return max_bal;
    }
};