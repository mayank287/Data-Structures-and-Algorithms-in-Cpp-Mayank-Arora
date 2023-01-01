// Multiset In C++ STL
#include <iostream>
#include<set>
using namespace std;

int main()
{

 multiset<int> m;
   m.insert(10);
   m.insert(20);
   m.insert(30);
   m.insert(10);
   m.insert(10);
   m.insert(10);
 
   cout << m.size() << endl;

  cout << m.count(10) << endl;
   
   for(int x : m){
       cout << x << " ";
   }
        return 0;
}
