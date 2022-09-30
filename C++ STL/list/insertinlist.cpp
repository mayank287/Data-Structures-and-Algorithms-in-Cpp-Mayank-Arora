// Insert in list In C++ STL
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l = {10,5,8};
       
    auto it = l.begin();
    it++;
    it = l.insert(it,15); // this insert at 1 pos before the given it
    l.insert(it,2,7); // this type take frequency of elements to insert after that the ouuput is {10,7,7,15,5,8}
    
    for(auto i : l){
        cout << i << endl;
    }
       
    

    return 0;
}

    // O/P 10,7,7,15,5,8