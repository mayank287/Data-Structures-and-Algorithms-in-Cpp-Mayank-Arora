// Find the Extra Char in String
// Method - 1
// Time Complexity o(nlogn)
#include <iostream>
#include<algorithm>
using namespace std;

char findExtra(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n = s1.length();
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]) return s2[i];
        
    }
    return s2[n];
    
}



int main()
{
    cout << findExtra("abacac","baaabcc");
    

    return 0;
}
// Method - 2
// Time Complexity o(n)
#include <iostream>

using namespace std;

char findExtra(string s1, string s2){
    int count[256] = {0};
    for(char x : s2){
        count[x]++;
        
    }
    for(char x : s1) {
        count[x]--;
        
    }
    for(int i = 0; i < 256; i++){
        if(count[i]  == 1) return (char) i;
        
    }
    
    return 0;
    
}
int main()
{
  cout << findExtra("ababab","ababac");
   

    return 0;
}

