 // Vectors Program 4

// Here We traverse the Vector in Reverse Order because rbegin() give the address of last element

#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int arr[] = {10,5,20};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   vector<int> v(arr,arr+n);
   for(auto it = v.rbegin(); it != v.rend(); it++){
       cout << (*it) << endl;
   }
   
    return 0;
}
