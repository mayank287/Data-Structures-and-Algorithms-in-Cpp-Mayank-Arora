// Forward List In C++ STL
// pushfornt and popfront in forward list
#include <iostream>
#include<forward_list>

using namespace std;

int main()
{
  forward_list<int> l = {10,15,20};
  
  l.push_front(20);
  l.push_front(30);
  l.pop_front();
  
  
  for(int x:l){
      cout << x  <<  " ";
  }
  

    return 0;
}
