// Prime Factors  More Optimized
// Time Complexity theta(sqrt(n))
#include <iostream>
using namespace std;

void printPrimeFactors(int n)
{
   if(n <= 1) return;
   while(n % 2 == 0)
  {
      cout << 2  << endl;
      n /= 2;
      
  }
    if(n % 3 == 0){
      cout << 3 << endl;
      n /= 3;
      
  }
  
  for(int i = 5; i*i <= n; i+=6){
      while(n % i == 0){
          cout << i << endl;
          n /= i;
          
      }
     
     while(n % (i + 2 ) == 0){
         cout << i + 2 <<  endl;
         n /= (i + 2 );
         
     }
  }
       
    if(n > 3){
        cout << n << endl;
        
    }
}

int main()
{
  
  
   printPrimeFactors(15);
   
  
    return 0;
}
