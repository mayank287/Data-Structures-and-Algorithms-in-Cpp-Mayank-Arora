// Pythagores Triplet 
class Solution{
public:
	
	bool checkTriplet(int arr[], int n) {
	   sort(arr,arr + n);
	   
	   for(int i = n - 1; i > 1; i--)
	   {
	       int low = 0;
	       int high = i - 1;
	       while(low < high)
	       {
	           if((arr[low] * arr[low]) + (arr[high] * arr[high]) < (arr[i] * arr[i])) low++;
	           else if((arr[low] * arr[low]) + (arr[high] * arr[high]) > (arr[i] * arr[i])) high--;
	           else return true;
	       }
	   }
	       return false;
	}
};