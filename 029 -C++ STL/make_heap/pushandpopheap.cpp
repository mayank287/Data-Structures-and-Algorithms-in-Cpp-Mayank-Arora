// Make_heap in C++ STL - 2
// Push and Pop in Heap

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
   vector<int> v = {15,6,7,12,30};
   make_heap(v.begin(),v.end(),greater<int>());
   cout << v.front() << endl;
   pop_heap(v.begin(),v.end(),greater<int>());
   cout << v.front() << endl;
   v[4] = 2;
   push_heap(v.begin(),v.end(),greater<int>());
   cout << v.front() << endl;
   
     

    return 0;
}


// Time Complexity 
// make_heap -> o(n)
// push_heap and pop_heap -> o(logn)