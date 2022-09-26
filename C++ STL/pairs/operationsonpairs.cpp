// Operations On Pairs 
// The Comparsion Can Be Held only According To The First Element
#include<iostream>
#include <utility>
using namespace std;

int main()
{
   pair <int,int> p1(5,10), p2(5,10);
    
    
   cout << "Operations on Pairs" << endl;
 
     cout << (p1 == p2 ) << endl;
     cout << (p1 != p2) << endl;
     cout << (p1 > p2) << endl; // here it check first for first element if they are equal then it move to another
     cout << (p1 < p2) << endl; // here it check first for first element if they are equal then it move to another
    return 0;
}

// O/p :- 1,0,1,0