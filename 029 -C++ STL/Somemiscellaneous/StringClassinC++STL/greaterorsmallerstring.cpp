// Greater or Smaller String 
#include <iostream>

using namespace std;

int main()
{

string s1 = "abc";
string s2 = "cba";


if(s1 == s2){
    cout << "equal" << endl;
}
else if(s1 < s2){
    cout << "smaller" << endl;
    
}
else{
    cout << "greater" << endl;
    
}

    return 0;
}
