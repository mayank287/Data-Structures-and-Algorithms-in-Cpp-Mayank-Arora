// Unordered_Set in C++ STL
#include <iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(30);
    for(auto x : s){
        cout << x << " ";
        
    }
    cout << endl;
    
    for(auto it = s.begin(); it != s.end();  it++)
    {
        cout << *it << endl;
        
    }
       
       
       cout << s.size() << endl;
       s.clear();
       cout << s.size() << endl;
       
       
       
       
       
       
    return 0;
}
