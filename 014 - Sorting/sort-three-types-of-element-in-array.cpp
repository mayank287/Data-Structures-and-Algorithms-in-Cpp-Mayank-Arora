// Sort an Array With Three Types of Element 
// 1st Form -> Sort an Array of 0s, 1s and 2s
// I/P :- arr[] = {0,1,0,2,1,2};
// O/P :- arr[] = {0,0,1,1,2,2}

// 2nd Form -> Three Way Partitioning
// I/P :- arr[] = {2,1,2,20,10,20,1}; pivot = 1
// O/P :- arr[] = {1,1,2,2,20,10,20} 

// 3rd Form -> Partitioning  Around Range
// I/P :- arr[] = {10,5,6,3,20,9,40}; range = [5,10]
// O/P :- arr[] = {3,5,6,9,10,20,40}


// Dutch National Flag Algo 
// Time Complexity theta(n) and Space theta(1)


#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
            
        }
    }
}

 






int main()
{
   int arr [] = {0,1,2,1,1,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr,n);
   
   for(int x : arr)
   {
       cout << x << " ";
       
   }

    return 0;
}
