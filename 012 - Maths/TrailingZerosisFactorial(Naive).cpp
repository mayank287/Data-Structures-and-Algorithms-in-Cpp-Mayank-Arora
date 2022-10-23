//Trailing Zeros in Factorial (Naive Solution)
// Time Complexity theta(n)
// This Problem has Overflow Issue
#include <iostream>
using namespace std;
int countZeros(int n)
{
    int fact = 1;
    
    for(int i = 2; i <= n; i++){
        fact *= i;
        
    }
    
    
    int res = 0;
    while(fact % 10 == 0)
    {
        res++;
        fact = fact/10;
        
        
    }
       
    return res;
}

int main()
{
   cout << countZeros(10);
   

    return 0;
}

