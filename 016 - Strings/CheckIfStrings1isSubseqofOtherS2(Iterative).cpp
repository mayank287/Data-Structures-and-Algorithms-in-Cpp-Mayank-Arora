// Check if String1 is Subseq of String S2
// Time Complexity O(n + m)
#include <iostream>
using namespace std;

bool isSubSeq(string &s1, string &s2, int n, int m)
{

    if(n < m) return // Optimization
    

int j = 0;
for(int i = 0; i < n && j < m; j++)
{
  if(s1[i] == s2[j]) j++;

    
}


return (j == m);


}


int main()
{
   cout << isSubSeq("YADXCP","AXY",6,3);
   

    return 0;
}
