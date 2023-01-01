// __builtin_popcount in C++ STL
// it is Used To Check Set Bits
#include <iostream>
using namespace std;

int
main ()
{
  cout << __builtin_popcount(5);
  // For Long
  cout << __builtin_popcountl(5);
  // For Long Long
  cout << __builtin_popcountll(5);


  return 0;
}
