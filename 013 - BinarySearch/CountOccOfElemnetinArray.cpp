// Count Occurrences On Array in a Sorted Array
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


int countOcc(int arr[], int n, int x)
{
    int first = firstocc(arr,n,x);
    
    if(first == -1)
    {
        return 0;
        
    }
    else
    {
        return(lastocc(arr,n,x) - first + 1);
    }
}






int main()
{
     int arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;
    
    
    cout << countOcc(arr,n,k);
     
    return 0;
}
