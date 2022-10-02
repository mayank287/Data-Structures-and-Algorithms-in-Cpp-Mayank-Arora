// Erase function in deque in C++ STL


#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq = {10,15,30,5,12};
    auto it = dq.begin();
     it = dq.insert(it,1256);
     cout << *it <<endl;
     it++;
     cout << *it << endl;
     it = dq.erase(it);
     cout << *it <<endl;
     
    //  it = dq.insert(it,2,3);
    //  cout << *it <<endl;
    //  it++;
    //  cout << *it <<endl;
    //  it =  dq.erase(it);
    //  cout << *it <<endl;
     
    
    
    
    // for(auto x : dq){
    //     cout << x << endl;
    // }

     return 0;
             
}
