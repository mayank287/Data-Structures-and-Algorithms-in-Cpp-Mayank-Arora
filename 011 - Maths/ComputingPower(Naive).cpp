// Computing Power (Naive)
// Time Complexity theta(n)

#include <iostream>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    for(int i = 0; i < n; i++)
    {
        res = res * x;
        
    }
     return res;
}


int main()
{
    cout << power(3,4);
    

    return 0;
}
