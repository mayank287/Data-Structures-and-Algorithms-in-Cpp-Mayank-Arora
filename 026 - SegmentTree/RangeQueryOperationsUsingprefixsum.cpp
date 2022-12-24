// Range Query Operations Using Prefix Sum 
// Time Complexity getSum() -> O(1) and Update O(n) 
// and Also it Requires O(n) for Preprocessing and O(n) Auxiliary Space 

#include <iostream>
using namespace std;

int getSum(int arr[], int qs, int qe)
{
	int sum = 0;

	for(int i = qs; i <= qe; i++)
		sum = sum + arr[i];

	return sum;
}

void update(int arr[], int i, int newVal)
{
	arr[i] = newVal;
}
	
	
int main() {
	int arr[] = {10, 20, 30, 40, 50}, n= 5;

	cout << getSum(arr, 0, 2) << " ";
	cout << getSum(arr, 1, 3) << " ";
	update(arr, 1, 60);
	cout << getSum(arr, 0, 2) << " ";
	cout << getSum(arr, 1, 3) << " ";
		
	return 0;
}