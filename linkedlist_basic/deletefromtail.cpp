// Time Complexity of thetha(n) as we use traverse
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    };
};
 
 
Node *deltailll(Node *head){
if(head == NULL){
    return NULL;
};

if(head -> next == NULL){
    delete head;
    return NULL;
};

Node *curr = head;
while(curr -> next -> next != NULL){
    curr = curr -> next;
};
delete(curr -> next);
curr -> next = NULL;
return head;

 
     
};

void printll(Node *head){
    if(head == NULL){
        return;
    };
    
    
    cout <<  head -> data<< "  ";
    printll(head ->  next);
    
};


int main(){
  
  Node *head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);
  head -> next -> next->next= new Node(50);

   head = deltailll(head);
  

  
  
  
  
  printll(head);
  
  return 0;
  
  
    
};

