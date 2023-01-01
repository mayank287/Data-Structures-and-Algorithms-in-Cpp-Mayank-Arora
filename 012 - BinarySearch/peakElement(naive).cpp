// Peak Element in Array 
// Tine Complexity o(n)
#include <iostream>
using namespace std;


int getPeak(int arr[], int n)
{
    if(n == 1 )  return arr[0];
    if(arr[0] >= arr[1]) return arr[0];
    if(arr[n - 1 ] > arr[n - 2]) return arr[n -  1];
    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1 ])
        {
            return arr[i];
            
        }
    }
    
    return  -1;
    
}





int main()
{
   int arr[] = {80,10,20,50,60,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << getPeak(arr,n);
   
   

    return 0;
}
