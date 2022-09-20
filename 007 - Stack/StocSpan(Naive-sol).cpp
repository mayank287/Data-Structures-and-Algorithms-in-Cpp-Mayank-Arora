// Stock Span Problem Naive Solution Time Complexity o(n2) or Wrost Case Time Complexity
// Very Tricky Problem 
//  I/P = N = 6, price[] = [10 4 5 90 120 80];
// O/P  = 1 1 2 4 5 1

#include <iostream>

using namespace std;

void printSpan(int arr[], int n){
    
    for(int i = 0 ; i < n ; i++){
        int span  = 1;
        for(int j = i - 1; j >=0 && arr[j] <=arr[i]; j-- ){
            span++;
            
            
        }
        
        cout << span << " ";
      
    }
      
}

int main()
{
  int arr[] = {10 ,4, 5, 90, 120, 80};
   
   printSpan(arr,6);
       return 0;
}
