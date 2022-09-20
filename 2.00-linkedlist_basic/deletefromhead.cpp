// Time Complexity of o(1)
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
 
 
Node *delheadll(Node *head){
 if(head == NULL){
     return NULL;
 }
else{
    Node *temp = head -> next;
    delete head;
    return temp;
    
};

     
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

  head = delheadll(head);
  

  
  
  
  
  printll(head);
  
  return 0;
  
  
    
};

