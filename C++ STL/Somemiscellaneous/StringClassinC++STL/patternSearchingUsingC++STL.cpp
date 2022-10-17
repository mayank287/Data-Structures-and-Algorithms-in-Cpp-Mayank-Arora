// Pattern Searching Using C++ STL 
#include <iostream>
using namespace std;

void patSearch(string txt, string pat){
    int pos = txt.find(pat);
    while(pos != string::npos){
        cout << pos << endl;
        pos = txt.find(pat,pos + 1);
        
    }
}

int main ()
{
  patSearch("geeks for geeks", "geek");
  


  return 0;
}

// O/P :- 0 10

// Problem 2
// Returns The Number After Points
#include <iostream>
using namespace std;

string digitsAfterdecimal(const string &no){
    int pos = no.find('.');
    if(pos == string::npos){
        return " ";
        
    }
    else{
        return no.substr(pos + 1 );
        
    }
}

 


int main ()
{
cout << digitsAfterdecimal("12.45697");

  


  return 0;
}
// Output :- 45697
