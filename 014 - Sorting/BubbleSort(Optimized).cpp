// Bubble Sort Optimized 
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a  = *b;
    *b = temp;
    
    
}

void bubbleSort(int arr[], int n)
{
  
    for(int i = 0; i < n - 1; i++)
        {
          bool swapped = false;
        
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j],&arr[j + 1]);
                swapped = true;
                
            }
        }
        
        if(!swapped) break;
      
    }
}

int main()
{ 
    
    int arr[] = {1,2,3,4};
    
    bubbleSort(arr,4);
    
    for(int x : arr)
    {
        cout << x << " ";
        
    }
    

    return 0;
}
