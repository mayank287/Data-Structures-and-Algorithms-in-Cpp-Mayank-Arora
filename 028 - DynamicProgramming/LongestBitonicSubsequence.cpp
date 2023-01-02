// Longest Bitonic Subsequence 
// We Simply use lis from left and right side
// Time Complexity O(n2) and Can be optimized upto O(nlogn) using binary search 
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	  int mx = 0;
	  int n = nums.size();
	  int LDS[n];
	  int LIS[n];
	  
	  for(int i = 0; i < n; i++)
	  {
	      LDS[i] = 1;
	      LIS[i] = 1; 
	  }
	  
	  
	  for(int i = 1; i < n; i++)
	  {
	      for(int j = 0; j < i; j++)
	      {
	          if(nums[i] > nums[j])
	          LIS[i] = max(LIS[i],LIS[j] + 1);
	      }
	  }
	  
	  for(int i = n - 2; i >= 0; i--)
	  {
	      for(int j = n - 1; j > i; j--)
	      {
	          if(nums[i] > nums[j])
	          {
	              LDS[i] = max(LDS[i],LDS[j] + 1);
	          }
	      }
	  }
	  
	  for(int i = 0; i < n; i++)
	  {
	      mx = max(mx,LIS[i] + LDS[i] - 1);
	  }
	  
	  
	  return mx;
	  
	  
	}
};