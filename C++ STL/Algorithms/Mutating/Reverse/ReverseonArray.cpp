// Reverse on Array in C++ STL

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int arr[] = {10,20,30,40,50};
  reverse(arr,arr + 5);
  
  for(int x :arr)
    {
        cout << x << endl;
        
    }
    
    return 0;
}
 