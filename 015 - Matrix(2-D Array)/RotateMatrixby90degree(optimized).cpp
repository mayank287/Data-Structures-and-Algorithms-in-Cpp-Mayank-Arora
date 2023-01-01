// Rotate Matrix by 90 degree (Optimized)
// Time Complexity theta(n2) and space o(1);
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = i + 1; j < n; j++)
	        {
	            swap(arr[i][j], arr[j][i]);
	        }
	    }
	    
	    
	    
	    
	    for(int i = 0; i < n; i++)
	    {
	        int low = 0, high = n - 1;
	        while(low < high)
	        {
	            swap(arr[low][i],arr[high][i]);
	            low++;
	            high--;
	        }
	    }
	    
	    
	}
 