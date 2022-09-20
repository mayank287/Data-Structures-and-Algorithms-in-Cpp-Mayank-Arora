// Rotate an Array by One 
// Time Complexity Thetha(n) and Auxillary Space Complexity Thetha(1)
#include<iostream>
using namespace std;

void rotateArray(int arr[], int n) {
	 int temp = arr[0];
	 for(int i = 0; i<n ;i++ ){
	     arr[i-1] = arr[i];
	 }
	      arr[n-1] = temp;


	};
	
int main() {
     
     int arr[] = {10,40,30,50};
    
    cout << "Before Rotate Array by 1 " <<endl;
    
     int n= sizeof(arr)/sizeof(arr[0]);
     
    for(int i = 0; i<n; i++){
        cout << arr[i] <<endl;
    };
    
    cout << n <<endl;
    
    rotateArray(arr,4);

    cout << "after Rotate Array by 1" <<endl;
    
    
     cout << n << endl;
     for(int j = 0; j<n; j++){
        cout << arr[j] <<endl;
    };
    
    

    return 0;
}