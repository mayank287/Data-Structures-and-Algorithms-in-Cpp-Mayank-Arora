// Optimal Stra of Game
// Time and Aux Space theta(n2  )
//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long maximumAmount(int arr[], int n){
          int dp[n][n];
          for(int i = 0; i < n - 1; i++)
          {
              dp[i][i + 1] = max(arr[i],arr[i + 1]);
          }
           
          for(int gap = 3; gap < n; gap = gap + 2)
          {
              for(int i = 0; i + gap < n; i++)
              {
                  int j = gap  + i;
                  dp[i][j] = max((arr[i] + min(dp[i + 2][j],dp[i + 1][j - 1])),(arr[j] + min(dp[i + 1][j - 1],dp[i][j - 2])));
              }
          }
           
          return dp[0][n - 1];
    }
};