// Maximum Sum of K Consecutive Elements Naive 
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int maxSum(int arr[], int n, int k)
{
	int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;

		for(int j = 0; j < k; j++)
		{
			sum += arr[i + j];
		}

		max_sum = max(max_sum, sum);
	}

	return max_sum;

}


int main() {
	
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

     cout<<maxSum(arr, n, k);
    
}