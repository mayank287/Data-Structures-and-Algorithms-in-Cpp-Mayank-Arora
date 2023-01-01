// Longest Subarray With Same Sum in Two Binary Array (Optimized)
// Time Complexity O(n) and Space Complexity O(n)


class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
          int temp[n];
          for(int i = 0; i < n; i++)
          {
              temp[i] = arr1[i] - arr2[i];
          }
          
          unordered_map<int,int> m;
          int prefix_sum = 0, max_len = 0;
          
          for(int i = 0; i < n; i++)
          {
              prefix_sum += temp[i];
              if(prefix_sum == 0) max_len = i + 1;
              
              if(m.find(prefix_sum) != m.end())
              {
                  max_len = max(max_len,i - m[prefix_sum]);
              }
              else{
                  m[prefix_sum] = i;
              }
              
          }
          
          return max_len;
          
          
    }
};