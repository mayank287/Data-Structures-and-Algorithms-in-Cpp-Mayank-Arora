
// Power Optimized
// Time Complexity theta(logn)
// Space  Complexity theta(log n) due to recursion stack

#include <iostream>

using namespace std;


int power(int x, int n)
{
    if(n == 0)
    {
        return 1;
        
    }
    
    int temp = power(x,n/2);
    temp = temp  *  temp;
    if(n % 2 == 0){
        return temp;
        
    }
    else{
        return temp * x;
        
    }
}

int main()
{
   cout << power(20,5);

    return 0;
}
