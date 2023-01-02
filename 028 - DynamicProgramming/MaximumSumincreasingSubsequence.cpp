// Maximum Sum Increasing Subsequence 
// Varation of LIS Problem we just need to store the sum in dp array rather then length 
// Time Complexity same as LIS

class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	   int dp[n];
	   for(int i = 0; i < n; i++)
	   {
	       dp[i] = arr[i];
	       for(int j = 0; j < i; j++)
	       {
	           if(arr[j] < arr[i])
	           dp[i] = max(dp[i],arr[i] + dp[j]); 
	       }
	   }
	   
	   int res = dp[0];
	   for(int i = 0; i < n; i++)
	   {
	       res = max(res,dp[i]);
	   }
	   
	   return res;
	   
	}  
};