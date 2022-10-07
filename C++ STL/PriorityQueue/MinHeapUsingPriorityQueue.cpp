// Min Heap Using Priority Queue
#include <iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
   priority_queue<int,vector<int>,greater<int> >pq;
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

// Returns MIn Heap



