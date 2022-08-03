class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=0; i<n; i++) dp[0][i]=1;  // moving to any position in top right would have only 1 way to reach as no bottom move made
        for(int i=0; i<m; i++) dp[i][0]=1;   // same in bottom left, 1 way to reach for any position
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];   // current vertex could be reached from above or left, so adding ways from both
            }
        }
        return dp[m-1][n-1];    // returning total paths till [m-1][n-1]
    }
};