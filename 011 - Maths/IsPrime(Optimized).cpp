// Check For Prime 
//Time Complexity o(sqrt(n)) which is less then n

#include <iostream>
using namespace std;
string isPrime(int n)
{
    if(n == 1)  return "No";
    
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return "No";
        
    }
            return "Yes";
    
}



int main()
{
    
cout << isPrime(35);
   
    
    return 0;
}
