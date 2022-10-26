// Print all Divisors More Optimized
#include <iostream>
using namespace std;

void printDivisor(int n)
{
    int i;
    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            cout << i << endl;
            
        }
    }
    
    
    
    for( ;i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout << (n/i) << endl;
            
        }
    }
}



int main()
{
    printDivisor(15);
    
    return 0;
}
