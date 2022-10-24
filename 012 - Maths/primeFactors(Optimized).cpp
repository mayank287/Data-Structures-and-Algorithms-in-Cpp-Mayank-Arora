// Print all Prime Factors  (Optimized)
#include <iostream>
using namespace std;

void printPrimeFactors(int n)
{
    if(n <= 1) return;
   for(int i = 2; i * i <= n; i++){
       while(n % i == 0)
       {
           cout << i << " ";
           n /= i;
           
       }
   }
   
   if(n > 0)
   {
       cout << n << " ";
   }
       
}
int main()
{
   
   printPrimeFactors(35);
   
     return 0;
}
