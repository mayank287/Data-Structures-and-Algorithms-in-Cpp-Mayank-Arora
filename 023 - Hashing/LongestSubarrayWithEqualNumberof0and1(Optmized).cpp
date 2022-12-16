// Longest Subarray With Equal Numbers of 0's and 1's (Optimized)
// Time Complexity O(n) and O(n) Aux Space
// This Problem is Same Longest Subarray With 0 Sum Just Remove 0 With 1
class Solution{
  public:
    int maxLen(int arr[], int n)
    {
     
     for(int i = 0; i < n; i++)
     {
         arr[i] = (arr[i] == 0) ? -1 : 1;
     }
     
     unordered_map<int,int> m;
     
     int prefix_sum  = 0, res = 0;
     for(int i = 0; i < n; i++)
      {
          prefix_sum += arr[i];
          
          if(prefix_sum == 0)
          {
              res = i + 1;
          }
          if(m.find(prefix_sum) == m.end())
          {
              m.insert({prefix_sum, i});
          }
          if(m.find(prefix_sum - 0) != m.end())
          {
              res = max(res,i - m[prefix_sum - 0]);
          }
          
      }
     return res;
       
    }
};