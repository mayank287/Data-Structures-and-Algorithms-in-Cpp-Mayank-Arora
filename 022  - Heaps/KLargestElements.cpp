// K Largest Elements 
// Min Heap Based Solution
// Time Complexity O(k + (n - k) * logk)
#include <bits/stdc++.h>
using namespace std;

void firstKElements(int arr[], int n, int k)
{
	
	priority_queue <int,vector<int>,greater<int>> minHeap;
	for(int i = 0; i < k; i++)
	{
		minHeap.push(arr[i]);
	}
	for(int i = k; i < n; i++)
	{
		if (minHeap.top() > arr[i])
			continue;
		else
		{
			minHeap.pop();
			minHeap.push(arr[i]);
		}
	}
	
	while(minHeap.empty()==false){
	    cout<<minHeap.top()<<" ";
	    minHeap.pop();
	}
}

int main()
{

	int arr[] = { 11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int k = 3;

	firstKElements(arr,size,k);

	return 0;
}



// GFG Solution
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	   priority_queue<int,vector<int>,greater<int>> pq;
	   vector<int> ans;
	   for(int i = 0; i < k;i++)
	   {
	       pq.push(arr[i]);
	       
	   }
	  
	  for(int i = k; i < n; i++)
	  {
	      if(pq.top() > arr[i])
	      {
	          continue;
	      }
	      else{
	          pq.pop();
	          pq.push(arr[i]);
	      }
	  }
	  
	  while(!pq.empty())
	  {
	      ans.push_back(pq.top());
	      pq.pop();
	  }
	  reverse(ans.begin(),ans.end());
	  
	  return ans;
	  
	  
	}

};