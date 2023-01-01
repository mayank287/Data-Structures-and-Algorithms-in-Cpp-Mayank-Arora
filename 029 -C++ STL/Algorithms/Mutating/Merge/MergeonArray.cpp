// Merge On Array Using C++ STL
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  
   int arr[] = {10,20,30};
   int arr2[] = {5,15,40,50};
   int arr3[7];
   merge(arr,arr+3,arr2,arr2 + 4,arr3);
   for(int x : arr3){
       cout << x << " ";
   }
   
   
   

    return 0;
}
