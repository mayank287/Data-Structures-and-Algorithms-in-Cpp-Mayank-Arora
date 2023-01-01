// Allocate Minimum Number of Pages 
// Dynamic Programming Solution
// Tabualation 
// Time Complexity is too High O(n3k) and space theta(nk)
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int b, int e)
{
    int s = 0;
    for(int i = b; i <=e; i++)
    {
        s+= arr[i];
    }
    
    return s;
    
}


int minPages(int arr[], int books,int students)
{
  int dp[students + 1][books + 1];
  
  for(int i = 1; i <= books; i++)
     dp[1][i] = sum(arr,0,i - 1);
  
  for(int j = 1; j <= students; j++)
      dp[j][1] = arr[0];
    

    for(int i = 2; i <= students; i++)
    {
        for(int j = 2; j <= books; j++)
        {
            int res = INT_MAX;
            
            for(int p = 1; p < j; p++)
              res = min(res,max(dp[i - 1][p],sum(arr,p,j - 1)));
             dp[i][j] = res;
        }
        
    }
     return dp[students][books];
    
}


int main() {
   int arr[] = {12, 34 ,67, 90};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << minPages(arr,n,5);

    return 0;
}