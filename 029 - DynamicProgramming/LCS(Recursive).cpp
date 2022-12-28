#include <iostream>
using namespace std;

int lcs(string s1,string s2,int m,int n)
{
    if(m == 0 || n == 0) return 0;
    if(s1[m - 1] == s2[n - 1]) return (1 + lcs(s1,s2,m - 1,n - 1));
    else{
       return max(lcs(s1,s2,m - 1,n),lcs(s1,s2,m,n - 1));
    }
          
}


int main() {
  
   string str1 = "abc";
   string str2 = "abc";
   int m = str1.length();
   int n = str2.length();
   cout << lcs(str1,str2,m,n);
   


    return 0;
}



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