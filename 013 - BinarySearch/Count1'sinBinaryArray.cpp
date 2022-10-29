// Count 1's In Binary Array
// Time Complexity o(logn)
#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == 0)
        {
          low = mid + 1;
          
        }
        else{
            if(mid == 0 || arr[mid - 1 ] != arr[mid])
            {
                return (n - mid);
                
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
   int arr[] = {0,0,1,1,1,1,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   
   cout << countOnes(arr,n);
   
   

    return 0;
}
