// Anagram Search in String
// Naive Time Complexirty O((n - m  + 1) * m)
#include <iostream>
using namespace std;

const int CHAR = 256;
bool areAnagram(string &pat,string &txt,int i)
{
    int count[CHAR] = {};
    for(int j = 0; j < pat.length(); j++)
    {
        count[pat[j]]++;
        count[txt[i + j]]--;
        
    }
    
    for(int j = 0; j < CHAR; j++)
    {
        if(count[j] != 0) return false;
        
    }
    
    return true;
}


bool isPresent(string &txt,string &pat)
{
    int n = txt.length();
    int m = pat.length();
    for(int i = 0; i < n - m;i++)
    {
        if(areAnagram(pat,txt,i)) return true;
    }
    
    return false;
}










int main()
{
    string txt = "mayankarora";
    string pat = "ora";
    if(isPresent(txt,pat))
    {
        cout << "Anagram Found" << endl;
    }
    else{
        cout << "Not";
        
    }

    return 0;
}
