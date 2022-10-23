// Factorail  of  Number 
// Time Complexity o(n) and Space o(1)
#include <iostream>

using namespace std;
int fact(int n)
{
    int res = 1;
    for(int i = 2; i <= n;i++)
    {
        res *= i;
        
    }
    return res;
    
}

int main()
{
   cout << fact(6);
   

    return 0;
}

// Using Recursion
// Time Complexity theta(n) Time and Space

#include <iostream>

using namespace std;


int fact(int n)
{
    if(n == 0) return 1;
    return n * fact(n - 1);
    
    
}

int main()
{
   cout << fact(6);
   

    return 0;
}
