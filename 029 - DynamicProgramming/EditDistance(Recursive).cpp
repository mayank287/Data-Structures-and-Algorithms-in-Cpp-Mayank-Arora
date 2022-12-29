// Edit Distance Recursive 
#include <iostream>
    #include<string.h>
    using namespace std;
    
    int editD(string s1, string s2, int m, int n)
    {
        if(m == 0) return n;
        if(n == 0) return m;
        
        if(s1[m - 1] == s2[n - 1]) return editD(s1,s2,m - 1,n - 1);
        else 
        {
            return 1 + min(editD(s1,s2,m,n - 1),min(editD(s1,s2,m - 1,n),
            editD(s1,s2,m - 1,n - 1))
            );
        }
    }
    
    
    
    
    int main() {
      string s1 = "intention", s2 = "execution";
      int m = s1.length();
      int n = s2.length();
      
      cout << editD(s1,s2,m,n) << endl;
    
    
        return 0;
    }