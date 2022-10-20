// Power of 2 (Naive Solution)
// All Power of Two has Only One Bit Set 

#include <iostream>

using namespace std;

bool isPow2(int n)
{
    if(n == 0) return false;
    while(n != 1)
    {
        if(n % 2 !=  0)
        {
            
        return false;
        }
         
         
        n = n/2;
        
    }
    
    return true;
    
}

int main()
{
   
    cout << isPow2(10) <<  endl;
    
    return 0;
}
