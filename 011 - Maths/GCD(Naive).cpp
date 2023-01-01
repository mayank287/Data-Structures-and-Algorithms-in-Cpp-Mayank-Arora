// GCD OF Two Number 
// Time Complexity o(min(a,b))
#include <iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
  int res = min(a,b);
  while(res > 0)
  {
      if(a % res == 0 && b % res == 0)
      {
          break;
      }
      
      res--;
      
  }
     return res;
   
}



int main()
{
    cout << gcd(10,15);
    
    
    

    return 0;
}
