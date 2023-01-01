//  Check The String is Panagram or Not 
// Panagram is Concept Where in String There is All Char From A-Z
// Time Complexity o(n)
#include <iostream>

using namespace std;

bool isPanagram(string s )
{
    int n = s.length();
    if(n < 26) return false;
    bool visited[26] = {0};
    for(int i = 0; i < n;i++){
        char x =s[i];
        if(x >= 'a' && x <= 'z') visited[x - 'a'] = true; 
        if(x >= 'A' && x <= 'Z') visited[x - 'A'] = true;
        
    }
    for(int i = 0; i < 26; i++){
        
    if(visited[i] == false) return false;
    }
    return true;
    
    
}
int main()
{
   cout << isPanagram("abcdefghijklmnopqrstuvwxyz");
   

    return 0;
}
