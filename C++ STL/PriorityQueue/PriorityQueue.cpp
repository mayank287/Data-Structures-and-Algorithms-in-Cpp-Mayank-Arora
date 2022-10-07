// PriorityQueue in C++ STL
#include <iostream>
#include<queue>

using namespace std;

int main()
{
   priority_queue<int> pq;
   pq.push(10);
   pq.push(20);
   pq.push(30);
   cout << pq.top() << endl;
   cout << pq.size() << endl;
       
    while(pq.empty() == false){
        cout << pq.top() << endl;
        pq.pop();
        
    }   
       
       
    return 0;
}
// This Always Returns Max Element