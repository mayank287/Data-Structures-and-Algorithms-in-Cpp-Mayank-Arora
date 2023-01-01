// Count the Elements With More than n/k Occurences (Naive)
// Time Complexity O(nlogn)
#include <bits/stdc++.h>
using namespace std;

void printNByK(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int i=1,count=1;
    while(i<n){
        while(i<n&& arr[i]==arr[i-1]){
            count++;
            i++;
        }
        if(count>n/k)
            cout<<arr[i-1]<<" ";
        count=1;
        i++;
    }
    
}

int main()
{
    int arr[] = {10, 10, 20, 30, 20, 10,10};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    printNByK(arr, n, k);
}