// Count Set Bits in  Int 
// Naive Solution
// Time Complexity theta(Total Bits in n)


#include <iostream>
using namespace std;
int countSet(int n)
{
   int res = 0;
     while(n > 0)
   {
       if( n % 2 != 0) res++;
         n /= 2;
         
       
   }
 return res;
    
}

int main()
{
    cout << countSet(8) << endl;
        return 0;
}


// Using BitWise  Poperties

#include <iostream>

using namespace std;

int countSet(int n)
{
   int res = 0;
     while(n > 0)
   {
       if((n & 1) != 0) res++; 
       
       n >>= 1;  //  Right Shift By One is Use To  Divide The Number by 2
    
   }
 return res;
     
}
int main()
{
    cout << countSet(6) << endl;
    

    return 0;
}
