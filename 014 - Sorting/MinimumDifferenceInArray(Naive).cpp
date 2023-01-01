// Minimum Difference in Array(Naive)
// Time Complexity theta(n2)
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n)
{
    int ans = INT_MAX;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
           ans = min(ans,abs(arr[i] - arr[j]));
            
        }
    }
    
    return ans;
}



int main()
{
   int arr[] = {1, 19, -4, 31, 38, 25, 100};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << getMinDiff(arr,n);
   

    return 0;
}

