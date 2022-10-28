// First  Occurence of  Element in Sorted Array iterative
// Time Complexity o(logn)

#include <iostream>
using namespace std;





int firstocc(int arr[], int n, int k)
{
   int low = 0, high = n - 1;
   while(low <= high)
   {
       int mid  = (low + high)/ 2;
       if(arr[mid] > k)
       {
           high = mid - 1;
           
       }
       else if(arr[mid] < k)
       {
           low =  mid + 1;
           
       }
       else{
           if(mid == 0 || arr[mid - 1 ] !=  arr[mid])
           {
               return  mid;
           }
           else
           {
               high = mid - 1;
           }
       }
   }
    
    
    return -1;
    
}
    

int main()
{
    
    int arr[] = {5,10,10,10,15,20,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    
    
    cout << firstocc(arr,n,k);
    
    
    

    return 0;
}
