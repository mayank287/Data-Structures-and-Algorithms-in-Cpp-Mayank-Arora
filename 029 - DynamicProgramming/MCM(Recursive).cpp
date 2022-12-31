// Matrix Chain Multiplication 
// Recursive Solution 

#include <bits/stdc++.h>
using namespace std;


int mchain(int arr[], int i, int j)
{
    if(i + 1 == j) return 0;
    int res = INT_MAX;
    
    for(int k = i + 1; k < j; k++)
    {
        res = min(res,mchain(arr,i,k) + mchain(arr,k,j) + arr[i] * arr[k] * arr[j]);
    }
    
    return res;
}

    

int main() {
   int arr[] = {40, 20, 30};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << mchain(arr,0,n - 1);
   

    return 0;
}