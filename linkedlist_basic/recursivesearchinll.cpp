
#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
   Node(int val){
    data = val;
    next = NULL;
    
        
    };
};

int searchinll(Node *head, int val){
  if(head == NULL ) return -1;
  if(head -> data ==  val){
      return 1;
  }
  else{
     int res = searchinll(head ->  next,val);
     if(res == -1) return -1;
     else return (res+1);
     
  }
  
  
  
    
    
};

int main()
{
      Node *head = new Node(10);
      head ->  next =  new Node(20);
      head -> next -> next = new Node(30);
      head ->  next ->  next -> next = new Node(50);
      
      
    cout <<  searchinll(head,50)  <<  endl;
    
          

    return 0;
}
