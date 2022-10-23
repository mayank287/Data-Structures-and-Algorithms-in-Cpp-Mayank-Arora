// LCM of Two Number Opitimized
// Time Complexity o(log(min(a,,b)))
#include <iostream>
using namespace std;
int gcd(int a, int b){
    
    if(b == 0)
    {
        return a;
        
    }
    else{
        return gcd(b, a % b);
        
    }
}

int lcm(int a, int b)
{
    return  a*b/gcd(a,b);
    
}

int main()
{
 
    cout << lcm(8,9);
    

    return 0;
}
