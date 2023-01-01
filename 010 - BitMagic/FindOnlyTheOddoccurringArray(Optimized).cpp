// Find The Only Odd Occurring Number
// Time Complexity o(n) and o(1) Space
// Using XOR 
// Features of XOR 
// x ^ y  = x , 
// x ^ y = y ^ x,
// x ^ ( y ^ z) = (x ^ y ) ^ z
// x ^ x = 0
 
 #include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for(int i = 0; i < n; i++ )
    {
        res = res ^ arr[i];  // x ^ x = 0
    }
    
    
    return res;
     
}

int main()
{
  int arr[] = {4,3,4,4,4,5,5,3,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  cout << findOdd(arr,n);

    return 0;
}
