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
