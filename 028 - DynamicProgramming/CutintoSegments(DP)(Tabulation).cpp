// Cut into Segments Into Dynamic Programming 
// Tabulation 
// Time Complexity theta(n) and Space theta(n)
#include <iostream>
#include <string.h>
using namespace std;


       
  
    int maxCuts(int n, int a, int b, int c) 
    { 
        
     int dp[n+1];
     
     dp[0] =0;
     
     for(int i = 1; i<=n; i++)
     {
         dp[i] = -1;
         
         if(i-a >=0) dp[i] = max(dp[i],dp[i-a]);
         
         if(i-b >=0) dp[i] = max(dp[i],dp[i-b]);
         
         if(i-c >=0) dp[i] = max(dp[i],dp[i-c]);
         
         if(dp[i]!=-1)
            dp[i]++;
     }
  
    return dp[n];
       
    } 


int main() {
	
int n = 9999, a = 94, b = 20, c = 244;

cout<<maxCuts(n, a, b, c);
	

}