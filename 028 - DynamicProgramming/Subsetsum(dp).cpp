// Subset Sum DP Solution 
//User function template for C++

class Solution{   
public:
    
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        int dp[n + 1][sum + 1];
        
        for(int i = 0; i <= n; i++) dp[i][0] = 1;
        for(int j = 1; j <= sum; j++) dp[0][j] = 0;
        
        for(int i = 1; i <= n;i++)
        {
            for(int j = 1; j <= sum; j++)
            {
                if(j < arr[i - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                    
                }
                else 
                  dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
        }
    return dp[n][sum];
    }
    
    
};