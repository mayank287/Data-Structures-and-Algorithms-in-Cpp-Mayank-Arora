// Count Triplets
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int> ans;
	    for(int i = 0; i < n; i++)
	    {
	        ans[arr[i]];
	    }
	    
	    int count = 0;
	    for(int i = 0; i < n - 1; i++)
	    {
	        for(int j = i + 1; j < n; j++)
	        {
	            if(ans.find(arr[i] + arr[j]) != ans.end()) count++;
	        }
	        
	    }
	    
	    return count;
	}
};