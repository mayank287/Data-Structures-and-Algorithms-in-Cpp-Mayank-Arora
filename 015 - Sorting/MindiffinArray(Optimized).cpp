// Min Diff in Array Optimized
// Time Complexity O(nlogn)
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n)
{
   sort(arr,arr + n);
   int res  = INT_MAX;
   for(int i = 1; i < n; i++)
   {
       res = min(res,arr[i] - arr[i - 1] );
       
   }
   
   return res;
   
}



int main()
{
   int arr[] = {1, 19, -4, 31, 38, 25, 100};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << getMinDiff(arr,n);
   

    return 0;
}
