// Palindrome Number 
// Time Complexity heta(d)
#include <iostream>

using namespace std;

int isPal(int x)
{
    int rev = 0;
    int temp = x;
    while(temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp/10;
        
    }
    return(rev == x);
    
}

int main()
{
   cout << isPal(101);
   

    return 0;
}
