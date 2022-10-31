// Bubble Sort 
// Time Complexity theta(n2)

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
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j],&arr[j + 1]);
                
            }
        }
    }
    
    
    
    
}




int main()
{ 
    
    int arr[] = {10,8,20,5};
    
    bubbleSort(arr,4);
    
    for(int x : arr)
    {
        cout << x << " ";
        
    }
    

    return 0;
}
