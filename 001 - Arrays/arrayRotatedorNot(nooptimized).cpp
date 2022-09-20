// Check Array Rotated or Not in o(n2)(wrost acse)
// This Solution Need To Check For run 

#include <iostream>
using namespace std;
 bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n;i++){
            for(int j=i+1;i<n;j++){
                if(arr[j] <  arr[i]) { 
                    return 0;
                    
                }
            }
        }
           return 1;
    }

int main() {

int arr[] = {10,20,30,40,50};
cout << arraySortedOrNot(arr,5) <<endl;


    return 0;
}
