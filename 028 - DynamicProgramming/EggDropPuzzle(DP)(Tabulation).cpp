// Egg Drop Puzzle Tabulation Dynamic Programming
// Time Complexty O(
#include <iostream>
#include <limits.h>
using namespace std;

int countEggs(int eggs, int floors)
{
    int dp[floors + 1][eggs + 1];
    
    for(int i = 1; i <= eggs; i++ )
    {
        dp[1][i] = 1;
        dp[0][i] = 0;
    }
    
    for(int j = 1; j <= floors; j++)
    {
        dp[j][1] = j;
    }
    
    for(int i = 2; i <= floors; i++)
    {
        for(int j = 2; j <= eggs; j++)
        {
            dp[i][j] = INT_MAX;
            for(int x = 1; x <= i; x++)
            {
                dp[i][j] = min(dp[i][j],1 + max(dp[x - 1][j - 1],dp[i - x][j]));
            }
        }
    }
     return dp[floors][eggs];
    
}

int main() {
    
    cout << countEggs(3,14);
    return 0;
}