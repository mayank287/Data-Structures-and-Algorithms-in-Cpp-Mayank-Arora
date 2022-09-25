// Queue In c++ STL
#include<queue>

using namespace std;


void print_queue(queue<int> q){
    queue<int> temp = q;
     while(temp.empty() == false) {
       cout << temp.front()  << " ";
       temp.pop();
       
   }
}




int main()
{  queue <int> q;
   
   q.push(10);
   q.push(30);
   q.push(40);
   q.push(50);
   q.push(70);
   
   
    queue<int> q2;
    q2.push(4);
    q2.push(5);
    q2.push(6);
    q.pop();
   
  cout << q.empty() << endl;
  cout << q.size() << endl;
  cout << q.front() << endl;
  cout << q.back() << endl;
  
  
    q.swap(q2);
  
   print_queue(q2);
    return 0;
}
