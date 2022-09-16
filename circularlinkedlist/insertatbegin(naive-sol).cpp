// Insert at Begin in doublyll naive sol with time Complexity o(n)
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data =x;
        next =NULL;
        
    };
    
};


Node *insertatbegin(Node *head, int x){
  Node *temp = new Node(x);
  if(head == NULL){
      temp -> next = temp;
  }
  else{
      Node *curr =head;
      while(curr -> next != head){
          curr = curr -> next;
      };
        curr -> next = temp;
        temp -> next = head;
        
      
      
  }
  
  return temp;
  
  
  
  
    
};




void printcircularll(Node *head){
    if(head == NULL) return ;
    
  Node *curr = head;
  do{
      cout << curr -> data << " ";
      curr = curr -> next;
  }while(curr!=head);
};


int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next  = new Node(30);
    head -> next -> next-> next =  new Node(40);
    head -> next -> next-> next -> next =  head;
   
   
   Node *newhead = insertatbegin(head,50);
   
   
   
   printcircularll(newhead);
   
  
    return 0;
    
    
    
}

