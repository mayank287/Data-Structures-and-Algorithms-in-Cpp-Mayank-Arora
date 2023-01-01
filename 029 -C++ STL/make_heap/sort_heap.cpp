// Sort Heap Function in C++
#include <iostream>
#include<algorithm>
#include<vector>

#define b begin()
#define e end()
using namespace std;

int main()
{
   vector<int> v = {15,6,7,12,30};
   make_heap(v.b,v.e,greater<int>());
   sort_heap(v.b,v.e,greater<int>());
   
   for(int x : v){
       cout << x << " ";
       
   }
     

    return 0;
}
