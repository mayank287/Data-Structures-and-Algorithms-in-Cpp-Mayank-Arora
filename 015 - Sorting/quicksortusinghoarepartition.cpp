#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    
    int pivot =  arr[low];
    int i = low - 1, j = high + 1;
    while(true)
    {
        do{
            i++;
        }while(arr[i] < pivot);
        
        do{
            j--;
        }while(arr[j] >  pivot);
        
        if(i >= j) return j;
        swap(arr[i],arr[j]);
        
        
    }
    
 
    
}

void quickSort(int arr[], int low, int high)
{
    
    if(low < high)
    {
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot);
        quickSort(arr,pivot + 1, high);
        
        
    }
    
}


int main()
{
   int arr[] = {8,4,7,9,3,10,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   quickSort(arr,0,n-1);
   
   for(int x : arr)
   {
       cout << x << " ";
       
   }

    return 0;
}
