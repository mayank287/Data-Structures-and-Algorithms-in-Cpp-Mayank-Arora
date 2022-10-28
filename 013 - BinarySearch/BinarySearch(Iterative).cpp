// Binary Search Iterative 
// Time Complexity o(logn) and Auxiliary space o(1)
#include <iostream>
using namespace std;

int bSearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == k)
        {
            return mid;
            
        }
        else if(arr[mid] > k)
        {
            high = mid - 1;
            
        }
        else{
            low = mid + 1;
            
        }
        
    }
        
        return -1;
    
}





int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << bSearch(arr,n,35);
    
    

    return 0;
}
 