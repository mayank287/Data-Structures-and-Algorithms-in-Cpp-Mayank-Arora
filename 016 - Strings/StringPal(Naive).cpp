// String Pali (Naive)
// Time Complexity O(n)
#include <iostream>
#include<algorithm>
using namespace std;

bool isPal(string &str)
{
    string rev = str;
    reverse(str.begin(),str.end());
    return (rev == str);
    
}





int main()
{
    string str = "abba";
    cout << isPal(str);
    

    return 0;
}
