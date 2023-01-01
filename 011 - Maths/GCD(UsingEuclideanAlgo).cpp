#include <iostream>
#include<algorithm>
using namespace std;


int gcd(int a,int b)
{
    while(a != b)
    {
        if(a > b )
        {
            a -= b;
            
        }
        else{
            b -= a;
            
        }
          }
      return a;
    
}
int main()
{
    cout << gcd(6,9);
         return 0;
}
