// Some More Functions in forward list
#include <iostream>
#include<forward_list>
using namespace std;

int main()
{
   forward_list<int> l = {15,20,30,5};
   
     l.clear();
     cout << l.empty() <<  endl;
      l.reverse(); 
      l.merge();
      l.sort();
   
   for(auto x : l){
       cout << x << endl;
       
   }
   

    return 0;
}
