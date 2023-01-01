// Find Peak Element in Array 
// Time Complexity o(logn)
#include <iostream>

using namespace std;

int getPeak(int arr[], int n)
{
    
   int low = 0, high = n - 1 ;
   while(low <= high)
   {
       int mid = (low + high) / 2;
       if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
       {
           return arr[mid];
           
       }
       else{
           if(mid > 0 && arr[mid - 1 ] >= arr[mid])
           {
               high = mid - 1;
               
           }
           else{
               low = mid + 1;
               
           }
       }
       
       
      
   }
  
  
  return -1;
}




int main()
{
   int arr[] = {5,10,20,40,60,70,80};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << getPeak(arr,n);
   
  
  
   
    return 0;
}
