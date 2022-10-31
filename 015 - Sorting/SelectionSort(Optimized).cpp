// Selection Sort 
// Time Complexity o(n2)
// Bubble Sort Optimized 
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a  = *b;
    *b = temp;
    
    
}

void SelectionSort(int arr[], int n)
{
    
    
  
  for(int i = 0; i < n - 1; i++ )
  {
      int min_index = i;
      for(int j = i + 1; j < n; j++)
      {
          if(arr[j] < arr[min_index])
          {
              min_index = j;
              
          }
      }
      
     
          
          	    
      swap(&arr[min_index], &arr[i]);
          	
      
      
  }
    
}

int main()
{ 
    
    int arr[] = {4, 1, 3, 9, 7};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    SelectionSort(arr,n);
    
    for(int x : arr)
    {
        cout << x << " ";
        
    }
    

    return 0;
}
