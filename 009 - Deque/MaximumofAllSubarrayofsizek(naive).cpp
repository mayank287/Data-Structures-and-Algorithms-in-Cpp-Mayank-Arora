// Maximum of All Subarray of size of k (Naive)
// Time Complexity O(n2)
#include<bits/stdc++.h>
using namespace std;
 
    
void MaxK(int arr[], int n, int k)
{
    for(int i = 0; i < n - k + 1; i++)
    {
        int mx = arr[i];
        for(int j = i + 1; j < i + k; j++)
        {
            mx = max(arr[j],mx);
        }
        cout << mx << " ";
    }
}
    
    
int main()
{
    int arr[]  {10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    MaxK(arr,n,3);
}
    