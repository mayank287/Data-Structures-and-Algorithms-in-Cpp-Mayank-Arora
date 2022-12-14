// Longest Subarray With Given Sum(Optimized)
// Time Complexity O(n) and Aux Space O(n)
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int sum) 
    { 
     unordered_map<int,int> m;
     int prefix_sum = 0, res = 0;
     for(int i = 0; i < n; i++)
     {
         prefix_sum += arr[i];
         if(prefix_sum == sum)
         {
             res = i + 1;
         }
         if(m.find(prefix_sum) == m.end())
         {
             m.insert({prefix_sum,i});
         }
         
         if(m.find(prefix_sum - sum) != m.end())
         {
             res = max(res,i - m[prefix_sum - sum]);
         }
     }
     
     return res;
     
    } 

};
