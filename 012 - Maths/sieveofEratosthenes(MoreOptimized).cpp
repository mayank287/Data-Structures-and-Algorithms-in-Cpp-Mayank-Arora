// Sieve of Eratosthened 
// Shorter Code Wise
// Time Complexity is Same as Previous 
// Time Complexity O(nloglogn)
#include <iostream>
#include<vector>
using namespace std;
void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for(int i = 2; i <=n; i++)
    {
        if(isPrime[i])
        {
            cout << i << endl;
            for(int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
                
            }
        }
    }
    
}


int main()
{   
    
    int n;
    cin >> n;
    sieve(n);
    
   

    return 0;
}
