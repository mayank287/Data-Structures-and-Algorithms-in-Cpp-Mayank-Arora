// Upper and Lower Bound in C++ STL
#include <iostream>
#include<set>


using namespace std;

int main()
{
   
   
   set<int> s;
   s.insert(10);
   s.insert(5);
   s.insert(20);
   
   
   auto it = s.lower_bound(5);
   cout << *it << endl;
   
   it = s.upper_bound(15);
   cout << *it  << endl;
   
   
   
   
   
   
   

    return 0;
}


// O/P 5,20