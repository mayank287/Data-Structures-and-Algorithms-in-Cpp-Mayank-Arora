// Quick Sort Using Lomuto Partititon 
#include <bits/stdc++.h>
using namespace std;

int  lPartition(int arr[], int low, int high)
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


void qSort(int arr[], int low, int high)
{
    if(low < high)
    {
        
    int p = lPartition(arr,low,high);
    qSort(arr,low,p - 1);
    qSort(arr,p + 1, high);
    
    }
    
    
    
    
}
 
int main() {
	
    int arr[]={8,5,4,10,9,6,12}; 
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
   qSort(arr,0,n - 1);
	
	for(int x: arr)
	    cout<<x<<" ";
}