// Largest Reactangular Area In Histogram (Naive Solution) 
// Hard Level 
// Time Complexity o(n2)



#include <bits/stdc++.h>
using namespace std;

int getMaxarea(int arr[], int n){
  int res = 0;
  for(int i = 0; i < n ;i++){
      int curr = arr[i];
      for(int j = i-1;  j >=0; j--){
          if(arr[j] >  arr[i]) curr = curr += arr[i];
          else break;
          
          
          
      }
      
      for(int j = i+1; j < n; j++){
          if(arr[j] >  arr[i] ) curr += arr[i];
          else break;
          
      }
        res =  max(res,curr);
         
      
     return res;
      
  };
  
  
  

    
    
};





int main()
{
   int arr[] = {6,2,5,4,1,5,6};
  cout <<  getMaxarea(arr,7) <<endl;
  
   

    return 0;
}
