// Check For Prime
// Naive Solution
// Time Complexity o(n)
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n == 1)  return false;
    for(int i = 2; i <n; i++)
    {
        if(n % i  == 0) return false;
    }
    
    return true;
}
 
int main()
{
    
   if(isPrime(7)){
       cout << "Yes" << endl;
       
   }
   else{
       cout << "No" << endl;
       
   }
   
    
    return 0;
}
