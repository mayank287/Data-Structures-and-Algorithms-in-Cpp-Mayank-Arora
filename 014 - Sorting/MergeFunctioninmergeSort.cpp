// Merge Function For Merge Sort 
// Time and Space theta(m)

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





int main()
{
   
   int arr[] = {10,20,40,20,30};
   merge(arr,0,2,4);
   
   
   for(int x  : arr)
   {
       cout << x << " ";
       
   }

    return 0;
}
