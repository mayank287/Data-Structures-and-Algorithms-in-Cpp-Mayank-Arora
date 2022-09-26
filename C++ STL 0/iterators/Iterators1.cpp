// Iterators Program 1
// Iterators are Like Pointers

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v ={10,20,30,40,50};
    vector<int> :: iterator i = v.begin();
    cout << *i << " ";
    i++;
    cout << *i << " ";
    i = v.end();
    i--;
    cout << *i << " ";
    return 0;
    
    

    return 0;
}


// O/P :- 10,20,50