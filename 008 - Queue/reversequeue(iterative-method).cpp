// iterative Method To Reverse The Queue
// Time and Space Complexity o(n) Both;

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
void reverse(queue<int> &q) // Here We Use & to Change The Actual Value in Main Function
{
    
stack<int> s;
while(!q.empty()){
    s.push(q.front());
    q.pop();
    
}


while(!s.empty()){
    q.push(s.top());
    s.pop();
    
}


}

int main()
{
  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
 
  
  reverse(q);
  print(q);
   return 0;
 
   
}

// GFG Solution
queue<int> rev(queue<int> q)
{
    
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
        
    }
    
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
        
    }
    
    
    
    return q;
       
    
}