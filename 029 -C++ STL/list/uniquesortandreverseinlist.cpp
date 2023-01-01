// Unique(), sort() and reverse() function in C++ STL

#include <iostream>
#include<list>

using namespace std;

int main()
{
   list<int> l = {1,2,3,3,5,4,5};
  
    l.reverse();
    l.sort();
    l.unique();  // This is used to remove consecutive duplicates say {3,3}

   
 
   
   for(int x:l){
       cout << x << " ";
       
   }
   
    return 0;
}
