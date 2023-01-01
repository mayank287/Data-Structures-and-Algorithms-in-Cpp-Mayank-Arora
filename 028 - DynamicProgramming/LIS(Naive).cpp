// Lomgest Increasing Subsequence 
// Time Complexity O(n2) and Space O(n)
#include <iostream>
using namespace std;

int LIS(int arr[], int n)
{
    int dp[n];
    dp[0] = 1;
    
    for(int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j])
            {
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
    }
    
    int res = dp[0];
    
    for(int i = 0; i < n; i++)
    {
        res = max(dp[i],res);
    }
    
    return res;
    
}



int main() {
    int arr[] = {10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << LIS(arr,n);
    


    return 0;
}