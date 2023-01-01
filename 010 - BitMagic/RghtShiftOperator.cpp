// Right Shift Operator in C++ 
#include <iostream>

using namespace std;

int main()
{
    
    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    
    int y = 4;
    int z = (x >> y);
    cout << z << endl;
    
   

    return 0;
}

// O/P :- 16 8 2
// (x >> y )  is Equivalent floor(x/ 2 power y)
// 16 = floor(33/2 power one) = floor(33/2) = 16
