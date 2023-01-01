// Print Distinct Elements in Array
// Time Complexity o(n2)
#include <iostream>
using namespace std;
void printDist(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i;j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        
        
        
        if(flag == false){
            cout << arr[i] << " ";
        }
    }
    
    
    
    
}



int main()
{
   int arr[] ={10,8,10,10,7,5,5};
    printDist(arr,7);
    

    return 0;
}


