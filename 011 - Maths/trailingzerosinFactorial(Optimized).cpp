// Trailing Zeros  in factorial 
// Optimized Time Complexity theta(logn)
// So Idea is This We Divide it By Factors of 5
// Calculattion of Time Complexity 
//  5 power k <= n
// k <= log5 power n

#include <iostream>
using namespace std;
int countTrailingZeros(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i *= 5)
    {
        res += n/i;
        
    }
    
    
    return res;
    
}

int main()
{
    cout << countTrailingZeros(2956);
    

    return 0;
}
