// Naive Partition 
// Time Complexity O(n) and Aux Space O(n)
#include <iostream>
using namespace std;

void NaivePartition(int arr[],int low, int high, int pivot)
{
    int temp[high - low + 1], index = 0;
    for(int i = low; i <= high; i++)
    {
        if(arr[i] <= arr[pivot])
        {
            temp[index] = arr[i];
            index++;
            
        }
    }
    
    for(int i = low; i <= high; i++)
    {
        if(arr[i] > arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
        
    }
    
    
}


int main()
{
    int arr[] = {5,13,6,9,12,11,8};
    
    NaivePartition(arr,0,6,6);
    
    for(int x : arr)
    {
        cout << x << " ";
        
    }

    return 0;
}
