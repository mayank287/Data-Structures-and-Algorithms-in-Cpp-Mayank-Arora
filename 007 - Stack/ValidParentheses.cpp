// Valid Parentheses Problem Using Stack
// Learning From This Question we use This ' ' instead of  " "

#include<bits/stdc++.h>
#include <stack>
using namespace std;

bool Matching(char a, char b){
    return ((a == '[' && b== ']') || (a == '{' && b == '}') || ( a== '(' && b == ')'));
}


bool isBalanced(string str){
    stack<char> st;
    
    for(int i = 0; i <str.length(); i++){
        if(str[i] == '[' || str[i] == '{' || str[i] == '('){
            st.push(str[i]);
        }
        else {
            if(st.empty() == true) return false;
            else if (Matching(st.top(),str[i]) == false) return false;
            else{
                st.pop();
                
            }
        }
    }
    
    
    return st.empty() == true;
}


int main() {
    string str  = "[{[]}]";
    if(isBalanced(str)) {
        cout << "Balanced" << endl;
        
    }
    else{
        cout << "Not Balanced" <<endl;
        
    }
    
   return 0;
}

// Leetcode Solution
class Solution {
public:
    bool Matching(char a, char b){
        return((a == '(' && b== ')') || (a=='{' && b == '}' ) || (a == '[' && b == ']'));
    }
    bool isValid(string s) {
       stack<char> st;
    
    for(int i = 0; i <s.length(); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        }
        else {
            if(st.empty() == true) return false;
            else if (Matching(st.top(),s[i]) == false) return false;
            else{
                st.pop();
                
            }
        }
    }
    
    
    return st.empty() == true;
        
    }
};


