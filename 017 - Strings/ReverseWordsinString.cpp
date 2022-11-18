// Reverse Word in String 
#include <bits/stdc++.h> 
using namespace std; 

void reverse(char str[],int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
 
int main() 
{ 
    string s = "Welcome to Gfg";int n=s.length();char str[n];
    strcpy(str, s.c_str());
    cout<<"After reversing words in the string:"<<endl;
    reverseWords(str,n);
    for (int i = 0; i < n; i++) 
        cout << str[i];
    
    return 0; 
} 

// GFG Solution 
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
       reverse(s.begin(),s.end());
       int n = s.size();
       int start = 0;
       for(int end = 0; end <= n; end++)
       {
           if(s[end] == '.' || end == n)
           {
               reverse(s.begin() + start,s.begin() + end);
               start = end + 1;
           }
       }
       
       return s;
       
    } 
};