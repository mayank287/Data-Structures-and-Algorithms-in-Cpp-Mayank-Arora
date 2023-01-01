// Sort an Array With Two Types of Elements
// Time Complexity theta(n) and Aux Space theta(n)

#include <bits/stdc++.h>
using namespace std;

void segregatePosNeg(int arr[], int n)
{
    int temp[n], i = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[j] < 0)
        {
            temp[i] = arr[j];
            i++;
            
        }
        
    }
    
    for(int j = 0; j < n; j++)
    {
        if(arr[j] > 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    
    
    
    for(int j = 0; j < n; j++)
    {
        arr[j] = temp[j];
        
    }
    
}






int main()
{
   int arr[] = {13,-12,18,-10};
   int n = sizeof(arr)/sizeof(arr[0]);
   segregatePosNeg(arr,n);
  
   for(int x : arr)
   {
       cout << x << " ";
       
   }
   

    return 0;
}

