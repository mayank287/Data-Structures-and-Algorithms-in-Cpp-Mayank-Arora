// Reverse a Items using Stack 
#include<bits/stdc++.h>
using namespace std;
 
string reverse(string str){
    stack<char> s;
    for(int i = 0; i <str.length(); i++){
        s.push(str[i]);
        
    }
    for(int i = 0; i < str.length(); i++){
        str[i] = s.top();
        s.pop();
        
    }
    return str;
}

int main()
{
   string str = "mayank";
   cout << reverse(str) << endl;
   
    

    return 0;
}