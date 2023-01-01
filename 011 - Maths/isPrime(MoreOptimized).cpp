// Check For Prime (More Optiimized)
// 3x faster then sqrt(n)

#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n == 1) return false;
    if(n == 2 || n == 2) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
            for(int i = 5; i*i <= n; i = i + 6)
    {
        if(n % i == 0 || n % (i + 2) == 0) 
        {
            return false;
        }
    }
    return true;
    
}

int main()
{    
cout << isPrime(25);
   
    
    return 0;
}
