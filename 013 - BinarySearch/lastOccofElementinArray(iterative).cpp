// last  Occurence of  Element in Sorted Array iterative
// Time Complexity o(logn)
#include <iostream>
using namespace std;





int lastocc(int arr[], int n, int k)
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
           if(mid ==n - 1 || arr[mid] != arr[mid + 1])
           {
               return  mid;
           }
           else
           {
              low = mid + 1;
              
           }
       }
   }
    
    
    return -1;
    
}
    

int main()
{
    
    int arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    
    
    cout << lastocc(arr,n,k);
    
    
    

    return 0;
}
