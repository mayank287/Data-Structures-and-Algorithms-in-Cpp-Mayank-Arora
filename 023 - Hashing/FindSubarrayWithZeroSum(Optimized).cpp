// Find Subarray With Zero Sum(Optimized)
// Time Complexity O(n) and Aux Space O(n)

bool isSubarray(int arr[], int n)
{
  unordered_set<int> s;
  int prefix_sum = 0;
  for(int i = 0; i < n; i++)
  {
    prefix_sum += arr[i];
    if(s.find(prefix_sum) != s.end())
    {
      return true;
    }
    if(prefix_sum == 0)
    {
      return true;
    }
    s.insert(prefix_sum);
    
  }
  return false;
    
}
