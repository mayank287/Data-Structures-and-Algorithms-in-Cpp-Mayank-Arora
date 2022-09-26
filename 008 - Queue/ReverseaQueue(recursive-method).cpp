// Reverse The Queue Using Recursion
// Time Complexity o(n) and Space o(1);

#include <iostream>
#include<stack>
#include<queue>
using namespace std;



void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
void reverse(queue<int> &q)
{
    
if(q.empty()){
    return;
    
}

int top = q.front();
q.pop();

reverse(q);
q.push(top);

}
int main()
{
  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(120);
  q.push(250);
  q.push(340);
  q.push(405);
  
  
  reverse(q);
  print(q);
   return 0;
  
  
  
   
}
