// Optimal Stra of Game Method - 1  Recursive 

#include <bits/stdc++.h>
using namespace std;

int optimalGame(int arr[], int i, int j)
{
    if(i + 1 == j) return max(arr[i],arr[j]);
    return max(arr[i] + min(optimalGame(arr,i + 2,j),optimalGame(arr,i + 1,j - 1)),arr[j] + min(optimalGame(arr,i + 1,j - 1),optimalGame(arr,i,j - 2)));
}



int main() {
 int arr[] = {8,15,3,7};
 int n = sizeof(arr)/sizeof(arr[0]);
 
 cout << optimalGame(arr,0,n - 1);
 

    return 0;
}