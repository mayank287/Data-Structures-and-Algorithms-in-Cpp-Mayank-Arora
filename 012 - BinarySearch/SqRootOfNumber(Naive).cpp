// Square Root Of Number Naive
// Time Complexity o(sqrt(n))

#include <iostream>

using namespace std;


int SqRootFloor(int n)
{
    int i = 1;
    while(i * i <= n)
    {
        i++;
    }
    
    
    return  (i - 1 );
    
}


int main()
{
   int n; 
   cin >> n;
   cout << SqRootFloor(n);
   

    return 0;
}
