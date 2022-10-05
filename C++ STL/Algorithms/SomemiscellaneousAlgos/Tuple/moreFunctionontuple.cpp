// More Function On Tuple 
#include <iostream>
#include<tuple>
using namespace std;

int main()
{
 tuple<char,int,int> t ('g',20,30);
 // To Get The Size
 cout << tuple_size<decltype(t)> :: value << endl;
 // Other Method to Get The Size
 cout << tuple_size<tuple<char,int,int>>:: value << endl;
 //o/p :- 3

 // To Unpair The Element
  char x;
  int y , z;
  tie(x,y,z) = t;
  // O/P :- 'g',20,30
 cout << x << " " << y << " " << z <<  " ";
    return 0;
}



// To Ignore Particular Elemnet in Tuple
#include <iostream>
#include<tuple>

using namespace std;

int main()
{
 tuple<char,int,int> t ('g',20,30);
 
 
 
  char x;
  int z;
  tie(x,ignore,z) = t;
  
 cout << x << " " << z <<  " ";
    return 0;
}
// O/P :- 'g', 20