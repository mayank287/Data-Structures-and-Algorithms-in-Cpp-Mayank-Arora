// Sort an Array With Two Types of Elements
// Time Complexity theta(n) and Aux Space theta(1)


#include <bits/stdc++.h>
using namespace std;

void segregatePosNeg(int arr[], int n)
{
    int i = -1, j = n;
    while(true)
    {
        do{
            i++;
        }while(arr[i] < 0);
        
        do{
            j--;
        } while(arr[j] >= 0);
        
        if(i >= j) return;
        swap(arr[i],arr[j]);
        
        
    }
    
}



int main()
{
   int arr[] = {12, 34, 45, 9, 8, 90, 3};
   int n = sizeof(arr)/sizeof(arr[0]);
   segregateoddEven(arr,n);
  
   for(int x : arr)
   {
       cout << x << " ";
       
   }
   

    return 0;
}

