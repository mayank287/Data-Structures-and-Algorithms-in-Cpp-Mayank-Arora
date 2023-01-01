// Pair Sum In Given Array 
// Time Complexity o(n2)
#include <iostream>

using namespace std;


bool isPair(int arr[], int n, int sum){
    
    for(int i = 0; i < n;i++){
        for(int j = i + 1; j < n; j++ ){
            if(arr[i] + arr[j] == sum){
                return true;
                
            }
        }
    }
    return false;
}


int main()
{
  int arr[] = {5,10,15,6,20};
  cout << isPair(arr,6,21);

    return 0;
}