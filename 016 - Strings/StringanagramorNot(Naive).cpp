// String Anagram of Each Other Or Not(Naive)
// Tiem Complexity O(nlogn)
#include <bits/stdc++.h> 
using namespace std; 
  
bool areAnagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
  
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
  
    return (s1==s2); 
} 
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 