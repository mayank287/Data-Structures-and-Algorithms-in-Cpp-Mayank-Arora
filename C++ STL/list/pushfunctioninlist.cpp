// Push_back fucntion in C++ STL
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    for(int x:l){
        cout << x << endl;
        
    }
    
    
    
    return 0;
}
