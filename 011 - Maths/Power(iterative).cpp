// Power Optimized
// Time Complexity theta(logn)
// Space  Complexity theta(1) due to recursion stack
#include <iostream>

using namespace std;

int power(int x, int n)
{
    int res = 1;
    while(n > 0)
    {
        if(n % 2 != 0)
        {
            res = res * x;
        }
        
        x = x * x;
        n = n/2;
        
    }
    
    
    return res;
    
}



int main()
{
   cout << power(2,3);
   

    return 0;
}


// 2nd method
#include <iostream>

using namespace std;

int power(int x, int n)
{
    int res = 1;
    while(n > 0)
    {
        if(n & 1)
        {
            res *= x;
        }
        
        x *= x;
        n = n >> 1;
        
    }
    
    
    return res;
    
}



int main()
{
   cout << power(2,5);
   

    return 0;
}


