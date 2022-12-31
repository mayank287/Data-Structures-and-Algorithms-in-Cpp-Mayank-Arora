// Maximum Sum with No 2 Consecutive Elements 
// Dynamic Programming Solution 
// Time O(n) and Space O(1)
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
       if(n == 1) return arr[0];
       int prev_prev = arr[0];
       int prev = max(arr[0],arr[1]);
       int res = prev;
       
       for(int i = 3; i <= n; i++)
       {
           res = max(prev,prev_prev +  arr[i - 1]);
           prev_prev = prev;
           prev = res;
       }
       return res;
       
    }
};