// Maximum Sum with No 2 Consecutive Elements 
// Dynamic Programming Solution 
// Time and Space O(n)
 #include <iostream>
using namespace std;


int maxSum(int arr[], int n)
{
 int dp[n + 1];
 if(n == 1) return arr[0];
 dp[1] = arr[0];
 dp[2] = max(arr[0],arr[1]);
 
 for(int i = 3; i <= n; i++)
 {
     dp[i] = max(dp[i - 1],dp[i - 2] + arr[i - 1]);
 }
 
 return dp[n];

  
    
}
int main() {
    int arr[] = {8,7,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr,n);

    return 0;
}