// Maximum With no 2 Consecutive
// Time Complexity O(2 ^ n)
#include <iostream>
using namespace std;


int maxSum(int arr[], int n)
{
    if(n == 1) return arr[0];
    else if(n == 2) return max(arr[0],arr[1]);
    else 
    {
        return max(maxSum(arr,n - 1), maxSum(arr,n - 2) + arr[n - 1]);
    }
}
int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr,n);

    return 0;
}