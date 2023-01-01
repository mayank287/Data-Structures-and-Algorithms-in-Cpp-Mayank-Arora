// Lomuto Partition
// Time Complexity O(n) and Aux Space O(1)
#include <bits/stdc++.h>
using namespace std;

void lPartition(int arr[], int low, int high)
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
   
   
    
}

 
int main() {
	
    int arr[]={10,80,30,90,40,50,70};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	lPartition(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}