// Min Steps to reach at end 
// Function to return minimum number of jumps to end of array
// Dp Based Solution 
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int dp[n];
        int i , j;
        
        dp[0] = 0;
        for(int i = 1; i < n; i++)
          dp[i] = INT_MAX;
          
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(arr[j] + j >= i)
                {
                    if(dp[j] != INT_MAX)
                    dp[i] = min(dp[i],dp[j] + 1);
                }
            }
        }
        return dp[n - 1] == INT_MAX ? -1 : dp[n - 1];
    }
};

// Less Time Complexity Solution

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps = 0;
        int curr_max = 0, curr_reach = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(i + arr[i] > curr_max)
            {
                curr_max = i + arr[i];
            }
            
            if(i ==  curr_reach)
            {
                jumps++;
                curr_reach = curr_max;
            }
            
            
            if(arr[i] == 0 && i == curr_max) return -1;
        }
        
        return jumps;
        
        
    }
};