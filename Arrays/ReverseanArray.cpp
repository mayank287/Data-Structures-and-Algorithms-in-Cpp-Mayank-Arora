// Reverse An Array 
// Time Complexity Thetha(n) and Auxillary Space Complexity Thetha(1)
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
	  int start = 0 , end = n-1;
	  while(start < end){
	      int temp = arr[start];
	      arr[start] = arr[end];
	      arr[end] = temp;
	      start++;
	      end--;
	      
	  }

	};
	
int main() {
     
     int arr[] = {10,40,30,50};
    
    cout << "Before Reverse" <<endl;
  int n= 4;
  for(int i = 0; i<n; i++){
        cout << arr[i] <<endl;
    };
    
  reverseArray(arr,4);
  cout << "after reverse" <<endl;
  
  for(int i = 0; i<n; i++){
        cout << arr[i] <<endl;
    };
    
    

    return 0;
}