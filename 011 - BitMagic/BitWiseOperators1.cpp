// BitWise Operators in C++ Part -1 
#include <iostream>

using namespace std;

int main()
{
  int x = 3,  y = 6;
  cout << (x & y) << endl;
  cout << (x | y ) << endl;
  cout << (x ^ y) << endl;
  

    return 0;
}
// O/P :- 2 7 5 
// ^ Xor Produces OutPut 1 When Two Input Bits are Different
// For Example of 3 and 6 
// 0 0 1 1 -> 3
// 0 1 1 0 -> 6
// 0 1 0 1 -> (x ^ y)