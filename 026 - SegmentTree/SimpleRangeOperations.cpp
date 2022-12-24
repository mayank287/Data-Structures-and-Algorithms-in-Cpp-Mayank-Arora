// Simple Method of Doing Range Query 
// GetSum Time Complexity theta(qe - qs + 1) and Update is theta(1)
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