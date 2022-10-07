// Priority Queue Using Array
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


// Creating Array from Priority Queue is o(n)
// This Method is Best and push one by one is constlier in Time
// Time Complexity :- push,pop :- logn and empty,size,top :- o(1)