// Kth Smallest Element in Array
// Time Complexity O(n) and Aux Space O(logn)
#include <bits/stdc++.h>
using namespace std;


int lPartition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i  = low - 1;
    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
            
        }
    }
    
    swap(arr[i + 1], arr[high]);
   
   return (i + 1);
   
    
}


int kthSmallest(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    
    while(low <= high)
    {
        int pivot = lPartition(arr,low,high);
        if(pivot == k - 1)
        {
            return pivot;
        }
        else if(pivot > k - 1 )
        {
            high = pivot - 1;
            
        }
        else{
            low = pivot + 1;
            
        }
        
    }
    return -1;
    
    
}




int main()
{
    int arr[]={12, 5 ,787, 1, 23};
	
	int n=sizeof(arr)/sizeof(arr[0]);int k=2;
	
	int index=kthSmallest(arr,n,k);
	
	cout<<arr[index];

    return 0;
}
