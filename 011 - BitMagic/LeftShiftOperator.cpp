// Left Shift Operator in C++ 
// it Takes 2 Arguments That Which Number to Shift and by How many Bits
#include <iostream>

using namespace std;

int main()
{
   int x = 3;
   cout << (x << 1) << endl;
   cout << (x << 2) << endl;
   int y = 4;
   int z = x << y;
   cout << z << endl;
   
  

    return 0;
}

// O/P :- 6 12 48
// If We assume that the leading y bits are 0, then result of(x << y) is Equivalent to x*2 power y
// 6 = 3 * 2 power 1 = 6
// 12 = 3 * 2 power 2 = 3 * 4 = 6
 