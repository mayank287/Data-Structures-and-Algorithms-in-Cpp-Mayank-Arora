// Left Most Reapeating Char Method - 2
// Time Complexity O(n + char)
// Aux Space O(char or constant   )
#include <bits/stdc++.h> 
using namespace std; 


const int CHAR = 256;

int leftMost(string &str)
{
 
 int findex[CHAR];
 fill(findex,findex + CHAR,-1);
 int res = INT_MAX;
 for(int i = 0; i < str.length(); i++)
 {
     int f1 = findex[str[i]];
     if(f1 == -1)
     {
         findex[str[i]] = i;
         
     }
     else{
         res = min(res,f1);
         
     }
     
     
 }
    
     return(res == INT_MAX ) ? -1 : res;
 
    
};


 
int main() 
{  string str = "abcd";

   cout << leftMost(str);
   
    return 0; 
} 