// Count Digits 
// Time Complexity 
//  theta(d)

#include <iostream>

using namespace std;

int countDigits(int x)
{
    int res = 0;
    while(x > 0)
    {
        x = x/10;
        res++;
        
    }
    
    return res;
    
}

int main()
{
   cout << countDigits(10);
   

    return 0;
}
