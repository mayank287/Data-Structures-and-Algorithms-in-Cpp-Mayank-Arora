// Merge 2 Sorted Array
// Time Complexity o((m + n) * log(m + n))
// Aux Space: theta(m + n)
#include <iostream>
#include<algorithm>
using namespace std;


void Merge(int arr1[], int arr2[], int m, int n)
{
    
    int arr3[m + n];
    for(int i = 0; i < m; i++ )
    {
        arr3[i] = arr1[i];
        
    }
    
    for(int i = 0; i < n;i++)
    {
        arr3[m + i] = arr2[i];
        
        
    }   
    
    sort(arr3,arr3 + m + n);
    
    for(int i = 0; i < (m + n); i++)
    {
        cout << arr3[i] << " ";
        
    }
    
    
    
}



int main()
{
   int arr1[] = {10,15,20,20,25,14};
   int arr2[] ={1,12,98,65};
   
   Merge(arr1,arr2,6,4);
   

    return 0;
}


 