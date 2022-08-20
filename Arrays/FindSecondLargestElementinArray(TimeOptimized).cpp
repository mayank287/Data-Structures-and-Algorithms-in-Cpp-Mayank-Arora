// Find Second Largest Element In Array In Time of Thetha(n) and Auxillary Space Thetha(1)
#include <iostream>
using namespace std;
int print2largest(int arr[], int n) {
int largest = 0; 
int res = -1;
for(int i=1 ;i<n;i++){
    if(arr[i] > arr[largest])
    {
       res = largest;
       largest = i;
    }
    
    else if(arr[i] != arr[largest])
    {
        if(res == -1 || arr[i] > arr[res]){
            res = i;
        }
    }
}
    return arr[res];
}
int main() {

     int arr[] = {10,40,30,10};
    cout << print2largest(arr,4) <<endl;
    

    return 0;
};