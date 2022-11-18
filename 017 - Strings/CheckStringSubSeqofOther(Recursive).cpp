// Check if String One is Subeq of Stinrg 2 (Recursive)
// Time Complexity O(n + m)

#include <iostream>
using namespace std;


bool isSubSeq(string s1, string s2, int n, int m)
{
    if(m == 0) return true;
    if(n == 0) return false;
    
    if(s1[n - 1] == s2[m - 1])
    {
      return  isSubSeq(s1,s2,n - 1,m - 1);
    }
    else{
        return  isSubSeq(s1,s2,n - 1,m);
        
    }
 }


int main()
{
   cout << isSubSeq("ABC","AC",3,2);
   

    return 0;
}
