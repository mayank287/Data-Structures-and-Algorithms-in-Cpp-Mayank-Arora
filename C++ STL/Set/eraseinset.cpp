// Erase Function in C++ STL
#include <iostream>
#include<set>

using namespace std;

int
main ()
{
  set < int, greater < int >>s;
  s.insert (10);
  s.insert (5);
  s.insert (20);
  s.insert (40);
  s.insert(5);

     s.erase(20);
for(int x : s){
    cout << x << " ";
}

  return 0;

}

 // O/P:- 40,10,5