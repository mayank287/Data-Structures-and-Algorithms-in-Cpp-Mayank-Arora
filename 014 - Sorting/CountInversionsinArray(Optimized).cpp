// Count Inversions in Array 
// Time Complexity O(nlogn) and Aux Space O(n)


#include <iostream>
using namespace std;

int CountandMerge(int arr[], int low, int mid, int high)
{
  int n1 = mid - low + 1, n2 = high - mid;
  int left[n1], right[n2];
  for(int i = 0; i < n1; i++)
  {
      left[i] = arr[i + low];
      
  }
  
  for(int j = 0; j < n2; j++)
  {
      right[j] =  arr[mid + 1 + j];
      
  }
  int res = 0, i = 0, j = 0, k = low;
  while(i < n1 && j < n2)
  {
      if(left[i] <= right[j])
      {
          arr[k++] = left[i++];
          
      }
      else{
          arr[k++] = left[j++];
          res = res + (n1 - i);
          
      }
  }
  
  while(i < n1)
  {
      arr[k++] = left[i++];
      
  }
  
  while(j < n2)
  {
      arr[k++] = right[j++];
      
  }
  
  
  return res;
    
}

int countInv(int arr[],int low, int high)
{
  
  int res = 0;
  if(low < high)
  {
      int mid = (low + high) / 2;
      res += countInv(arr,low,mid);
      res += countInv(arr, mid + 1, high);
      res += CountandMerge(arr,low,mid,high);
      
  }
  
  
  return res;
 
    
}



int main()
{
  int arr[] = {2, 4, 1, 3, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
   
  cout << countInv(arr,0,4);

    return 0;
}




