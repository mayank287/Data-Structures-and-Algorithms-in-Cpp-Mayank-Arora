// LCM of Two Number 
// Time Complexity o(a* b - max(a,b))
#include <iostream>
using namespace std;


int lcm(int a, int b)
{
    int res = max(a,b);
    while(true)
    {
        if(res % a == 0 && res % b == 0) return res;
        res++;
        
    }
    return res;
    
}

int main()
{
 
    cout << lcm(8,9);
    

    return 0;
}
