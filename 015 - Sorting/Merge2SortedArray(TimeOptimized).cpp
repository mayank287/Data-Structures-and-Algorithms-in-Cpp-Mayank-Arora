// Merge Two Sorted Array Time Optimized
#include <iostream>
#include<algorithm>
using namespace std;


void Merge(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while(i < m && j < n)
  {
      if(arr1[i] <= arr2[j])
      {
          cout << arr1[i++] << " ";
          
      }
      else{
          cout << arr2[j++] << " ";
          
      }
      
      
  }
  
  
  while(i < m)
  {
      cout << arr1[i++] << " ";
      
  }
  
  while(j < n)
  {
      cout << arr2[j++] <<  " ";
      
  }
    
    
}

int main()
{
   int arr1[] = {10,15,20,20,25,14};
   int arr2[] ={1,12,98,65};
   
   Merge(arr1,arr2,6,4);
   

    return 0;
}
