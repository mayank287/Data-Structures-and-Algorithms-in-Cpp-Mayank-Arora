// Merge Function in C++ STL
#include <iostream>
#include<list>

using namespace std;

int main()
{
   list<int> l = {1,2,3,80,90};
  list<int> l2 = {7,8,9};
  
    l.merge(l2);
  
   
   
   
   for(int x:l){
       cout << x << " ";
       
   }
    
    
    return 0;
}

// This function merge two list in sorted order
// O/P 1 2 3 7 8 9 80 90 