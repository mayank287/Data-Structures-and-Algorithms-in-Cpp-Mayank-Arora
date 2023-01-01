// Count greater elements for every array element
// Time Complexity o(n2)
#include <iostream>

using namespace std;

void printGreater(int arr[], int n){
for(int i = 0; i <n; i++){
    int count = 0;
    for(int j = 0; j < n; j++){
        if(j != i && arr[j] > arr[i]){
          count++;
          
            
        }
        
        
        
    }
     cout << count << " ";
}
}

int main()
{
    
int arr[] = {5,6,2,10,25,6};
printGreater(arr,6);

   
}
