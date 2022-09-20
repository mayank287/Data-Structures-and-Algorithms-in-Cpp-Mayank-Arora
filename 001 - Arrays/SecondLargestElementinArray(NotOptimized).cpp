// Find Second Largest Element In Array Without Optimization

#include <iostream>
using namespace std;
int getLargest(int arr[], int n)
{
   int res = 0;
   for(int i=1;i<n;i++){
       if(arr[i] > arr[res])
       {
           res = i;
       }
       
   }
   return res;
   
}
int print2largest(int arr[], int n) {
int largest = getLargest(arr,n);
int res = -1;
for(int i = 0; i<n;i++){
    if(arr[i] != arr[largest])
    {
        if(res == -1){
            res = i;
            
        }
        else if(arr[i] > arr[res])
        {
            res = i;
        }
    }
}


if(res == -1){
    return -1;
}
else{
    return arr[res];
    
}

	   
}

int main()
{
    int arr[] = {10,10,10,10};
    cout << print2largest(arr,4) <<endl;
    

    return 0;
}
