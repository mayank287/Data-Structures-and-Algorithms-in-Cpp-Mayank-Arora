// Maximum Subarray Sum (Kadanes Algo)
// Time Complexity o(n)
#include <iostream>
#include <cmath>
using namespace std;


int maxSum(int arr[], int n)
{
	int res = arr[0];

	int maxEnding = arr[0];

	for(int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
	}
	
	return res;
}



int main() {
	
     int arr[] = {1, -2, 3, -1, 2}, n = 5;

     cout<<maxSum(arr, n);
    
}