// Equilibrium Point(Optimized Method)
// Time Complexity O(n) 
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


bool checkEquilibrium(int arr[], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	int l_sum = 0;

	for(int i = 0; i < n; i++)
	{
		if(l_sum == sum - arr[i])
			return true;

		l_sum += arr[i];

		sum -= arr[i];
	}

	return false;
}
    


int main() {
	
      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

    
}