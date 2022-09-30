// Insert and Remove function in list in C++ STL
#include <iostream>
#include<list>

using namespace std;

int main()
{
   list<int> l = {10,20,40,10,20,60};
   auto it = l.begin();
   it = l.erase(it); // this remove the element at particular it and return it to next element
   l.remove(10); // this remove all particular occoccurrences in list it's output is {20,40,20,60}
    
   
   
   for(int x:l){
       cout << x << endl;
       
   }
    
    
    return 0;
}
