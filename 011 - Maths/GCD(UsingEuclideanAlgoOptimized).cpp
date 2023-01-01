//  Finding GCD of Two Number Using  Euclidean Algo Optimized 
// Time Complexity o(log(min(a,b)))


#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b == 0) 
    {
        return a;
        
    }
    else
    {
      return  gcd(b,a % b);
        
    }
}


int main()
{
    cout << gcd(15,10);
    

    return 0;
}
