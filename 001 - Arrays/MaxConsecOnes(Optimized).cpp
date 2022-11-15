// Max Conse Ones 
// Time Complexity O(n)
#include <iostream>
#include <cmath>
using namespace std;


int maxConsecutiveOnes(int arr[], int n)
{
	int res = 0, curr = 0;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			curr = 0;
		else
		{
			curr++;

			res = max(res, curr);
		}
	}
	
	return res;
}



int main() {
	
     int arr[] = {0, 1, 1, 0, 1, 1, 1}, n = 7;

     cout<<maxConsecutiveOnes(arr, n);
    
}