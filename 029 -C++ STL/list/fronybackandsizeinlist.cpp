#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l = {10,5,8};
       
    auto it = l.begin();
    it++;
    it = l.insert(it,15);
    l.insert(it,2,7);
 
    cout << l.front() << "  " << l.back() << endl;
    cout << l.size() << endl;
    
    
    
    return 0;
}
