// Previous Greater Element o(n2)  or o(nSquare )
// Rules For This Problem 
// 1. We Have To Find The Element Which is Position(Closet Position) Wise Greater In Left Side
// I/P = {15,10,18,12,4,6,2,8} 
// O/P = {-1,15,-1,18,12,12,6,12}

#include <iostream>

using namespace std;

void printleftGreater(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        int j;
          for(j=i-1; j >=0;j--)
         {
             if(arr[j] > arr[i] ){
                 cout << arr[j] << " ";
                 break;
             }
         }
         
         if(j == -1){
             cout << -1 <<  " ";
         }
        
    }
    
    
}





int main()
{
  int arr[] = {12,10,8};
   
   printleftGreater(arr,3);
       return 0;
}
