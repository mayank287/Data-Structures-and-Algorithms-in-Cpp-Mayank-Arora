// Erase function in deque in C++ STL
 
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq = {10,20,5,30};
     auto it = dq.begin();
     it = dq.insert(it,7);
     it = dq.insert(it,2,4);
     it++;
     it++;
     it = dq.erase(it);
    for(int i = 0; i < dq.size(); i++){
        cout << dq[i] << " ";
        
    }

    // It Returns Reference To The Object 
    
     
     return 0;
             
}
