// Print all Divisors
//  Time  Complexity theta(n) and  Space theta(1)

#include <iostream>
using namespace std;

void printDivisord(int n)
{
    for(int i = 1; i <= n;i++){
        if(n % i == 0) 
        {
            cout << i << endl;
            
        }
    }
}

int main()
{
  
  
  printDivisord(15);
   
  
    return 0;
}
