// pair in a sorted array which gives sum X
// Time Complexity o(n)

#include <iostream>

using namespace std;

bool isPair(int arr[], int n , int k)
{
    int left = 0, right = n - 1;
    while(left < right)
    {
        if(arr[left] + arr[right] == k)
        {
          return 1;
          
            
        }
        else if(arr[left] + arr[right] > k)
        {
            right--;
            
        }
        else{
            left++;
            
        }
    }
    
   
  return 0;
  
    
    
}


int main() {

    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 11;

    cout << isPair(arr,n,sum);
    



	return 0;
}