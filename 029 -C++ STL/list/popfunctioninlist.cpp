// Pop Functiom in List in C++ STL
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l = {10,5,12,16,8};
    l.pop_front();
    l.pop_back();
    
   for(auto it = l.begin(); it != l.end(); it++){
       cout << *(it) << " ";
       
   }
    
    
    
    return 0;
}
// O/P 5,12,16