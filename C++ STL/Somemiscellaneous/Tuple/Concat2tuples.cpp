// Concatenate 2 Tuples
#include <iostream>
#include<tuple>

using namespace std;

int main()
{
 tuple<char,int,int> t1 ('g',20,30);
 tuple<string,int> t2  ("abc",50);
 
 auto t3 = tuple_cat(t1,t2);
 
 
  cout << get<4> (t3) << endl;
  
    return 0;
}
