// Push_front(), push_back(), front() and back() function in deque
#include <iostream>
#include<deque>
using namespace std;

int main()
{
    
    deque<int> dq = {10,20,30};
    dq.push_front(10);
    dq.push_back(202);
    for(auto x :  dq){
        cout << x <<  " ";
        cout << endl;
        
    }

  cout << dq.front() << "  " << dq.back() << endl;


    return 0;
}
