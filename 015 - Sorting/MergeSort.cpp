// Merge Sort Algo 
// Time Complexity theta(nlogn)  and Space theta(n)
#include <iostream>


using namespace std;


void merge(int a[], int low, int mid, int high)
{
  
    int n1 = mid - low + 1, n2 = high - mid;
    
  
    int left[n1], right[n2];
    
    for(int i = 0; i < n1; i++)
    {
        left[i] = a[i + low];
        
    }
    
    for(int j = 0; j < n2; j++)
    {
        right[j] = a[mid + 1 + j];
        
    }
    
    
    int i = 0, j = 0, k = low;
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            a[k++] = left[i++];
           
        }
        else{
            a[k++] = right[j++];
            
            
        }
      
    }
    
    while(i < n1)
    {
        a[k++] = left[i++];
        
    }
    
    while(j < n2)
    {
        a[k++] = right[j++];
        
    }
    
  
    
  
}

void mergeSort(int arr[], int low, int high)
{
    
    
    if(high > low)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid + 1, high);
        merge(arr,low,mid,high);
        
    }
    
    
  
    
    
}

int main()
{
   
   int arr[] = {10,5,30,15,7};
   int n = sizeof(arr)/sizeof(arr[0]);
   int low = 0, high =4;
   
      mergeSort(arr,low,high);
   
   
   for(int i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
       
   }

    return 0;
}
