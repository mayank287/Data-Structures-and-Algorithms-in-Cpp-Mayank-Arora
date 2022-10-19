// Bitwise Not In CPP (~)
// It Will Change All Bits to Its Opposite
// Say 0 -> 1 & 1 -> 0
// Unsigned it has Min Value = 0 in all of its Bits and in max 1 in all of his bits
// Range of Unsigned int = [0,4294967295]
#include <iostream>

using namespace std;

int main()
{
 
 unsigned int x = 1;
 cout << (~x) << endl;

  x = 5;
 cout << (~x) << endl;
 
    
   

    return 0;
}
// O/P :- 4294967294 4294967290
