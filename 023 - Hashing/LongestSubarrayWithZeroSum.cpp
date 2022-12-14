// Longest Subarray With Zero Sum 
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>& arr, int n)
    {   
        unordered_map<int,int> m;
     int prefix_sum = 0, res = 0;
     for(int i = 0; i < n; i++)
     {
         prefix_sum += arr[i];
         if(prefix_sum == 0)
         {
             res = i + 1;
         }
         if(m.find(prefix_sum) == m.end())
         {
             m.insert({prefix_sum,i});
         }
         
         if(m.find(prefix_sum - 0) != m.end())
         {
             res = max(res,i - m[prefix_sum - 0]);
         }
     }
     
     return res;
     
    }
};