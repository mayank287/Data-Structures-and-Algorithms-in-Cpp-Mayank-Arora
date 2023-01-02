// Length of Shortest Common SuperSequence 


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string x, string y, int m, int n)
    {
        int dp[m + 1][n + 1];
        
        for(int i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }
        
        for(int j = 0; j <= n; j++)
        {
            dp[0][j] = 0;
        }
        
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(x[i - 1] == y[j - 1])
                  dp[i][j] = 1 + dp[i - 1][j - 1];
                 else{
                     dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
                 } 
            }
    
        }
        
        return m + n - dp[m][n];
        
    }
};