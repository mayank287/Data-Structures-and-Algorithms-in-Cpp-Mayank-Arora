// Their Problem 
//  Time Complexity o(nlogn)
#include <iostream>
#include<algorithm>
using namespace std;

int getMaxValue(int arr[], int n, int k)
{
    sort(arr,arr + n,greater<int> ());
    int res = 0;
    for(int i = 0; i < k; i++){
        res += arr[i];
    }
    return res;
    
}




int main()
{
   int arr[] = {3,7,2,5,12,30};
   int n  = sizeof(arr)/sizeof(arr[0]);
   
   cout << getMaxValue(arr,n,2);
   

    return 0;
}