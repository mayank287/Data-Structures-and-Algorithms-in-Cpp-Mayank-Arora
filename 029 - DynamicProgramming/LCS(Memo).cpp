#include <iostream>
#include <string.h>
using namespace std;

int memo[1000000];

int fib(int n)
{
    if(memo[n]==-1)
    {
        int res;
        
        if(n==0 || n==1)
            return n;
        
        else
           { res = fib(n-1)+fib(n-2);
           
            
           }
           
           memo[n]=res;
            
        
    }
    
    return memo[n];
}

int main() {
	
	
	int n = 5;
	
	memset(memo, -1, sizeof(memo));
	

	
	cout<<fib(5);
}

// LCS Memo Need to Done
// Time Complexity O()
class Solution {
public:
int dp[1000 + 1][1000 + 1];
    // int helper(int x,int y,string &s1,string &s2)
    // {
    //      if(dp[x][y] != -1) return dp[x][y];
    //      if(x == 0 || y == 0)  dp[x][y] = 0;
    //      if(s1[x - 1] == s2[y - 1 ])
    //      {
    //          dp[x][y] = 1 + helper(x - 1,y - 1,s1,s2);
    //      }
    //      else{
    //          dp[x][y] = max(helper(x - 1,y,s1,s2),helper(x,y - 1,s1,s2));
    //      }
    //      return dp[x][y];
         
    // }

     int maxLen(string& s1, string& s2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;
        
        if (dp[n][m] != -1)
            return dp[n][m];

        if (s1[n - 1] == s2[m - 1])
            return dp[n][m] = 1 + maxLen(s1, s2, n - 1, m - 1);
        else
            return dp[n][m] = max(0 + maxLen(s1, s2, n - 0, m - 1), 0 +    maxLen(s1, s2, n - 1, m - 0));
    }
    int longestCommonSubsequence(string s1, string s2) {
       memset(dp, -1, sizeof(dp));        
        return maxLen(s1, s2, s1.length(), s2.length());


    }
};