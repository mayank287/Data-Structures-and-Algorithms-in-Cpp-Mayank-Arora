// Hoare Partition
// Time C omplexity O(n) and Space O(1)
#include <iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int HPartition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
    while(true)
    {
     
     do{
         i++;
     }while(arr[i] < pivot);
     
     
     do{
         j--;
     }while(arr[j] > pivot);
     
     
     if(i >= j) return j;
     swap(&arr[i],&arr[j]);
     
     
        
    }
}



int main()
{
    int arr[] = {7,3,8,4,2,7,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
     HPartition(arr,0,n - 1);
   
   for(int x : arr)
   {
       cout << x <<  " ";
       
   }
    
    return 0;
}
