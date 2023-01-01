// Print all Divisors More Optimized
// Time Complexity theta(sqrt(n)) and Space Complexity theta(1)
 
#include<iostream>
#include<cmath>
using namespace std;

void printDivisor(int n)
{
    
    for(int  i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i << endl;
            
        }
    }
    
    

    
    
    for(int i = sqrt(n) ;i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout << (n/i) << endl;
            
        }
    }
}



int main()
{
    printDivisor(20);
    
    return 0;
}
