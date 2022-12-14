// SubArray With Sum Equals to K (Naive)
// Time Complexity O(n2)
#include <bits/stdc++.h>
using namespace std;

bool isSum(int arr[], int n, int sum)
{
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
           curr_sum+=arr[j];
           if(curr_sum==sum)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {5, 8, 6, 13, 3, -1};
    int sum=22;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << isSum(arr, n, sum);
}
