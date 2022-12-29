// Min Coins To Make The Value 
// DP Solution (Tabulation)
// LeetCode
// Time Complexity theta(n * value) and Aux Space theta(value)

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[amount  + 1];
        dp[0] = 0;
        for(int i = 1; i <= amount; i++)
         dp[i] = INT_MAX;

         for(int i = 1; i <= amount; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 if(coins[j] <= i)
                 {
                     int sub_res = dp[i - coins[j]];
                     if(sub_res != INT_MAX)
                     dp[i] = min(dp[i],sub_res + 1);
                 }
             }
         }

         return dp[amount] == INT_MAX ? -1 : dp[amount];
         
    }
};