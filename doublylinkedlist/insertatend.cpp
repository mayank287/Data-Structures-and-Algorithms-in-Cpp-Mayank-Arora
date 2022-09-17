// Insert At The End of Doubly LinkedList



#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data =x;
        next =NULL;
        prev = NULL;
        
        
    };
    
};


Node *insertatend(Node *head, int value){
  Node *temp = new Node(value);
  if(head == NULL){
      return temp;
  }
  
  
  Node *curr = head;
  while(curr -> next != NULL){
      curr = curr -> next;
  };
  
  curr -> next = temp;
  temp -> prev = curr;
  
  return head;
  
  
    
}


void printdoublell(Node *head){
   while(head != NULL){
     cout << head -> data << " ";
      head =  head -> next ;
   };
};


int main(){
    Node *head = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(20);
    Node *fourth= new Node(50);
   
   
   head -> prev = NULL;
   head -> next = second;
   
   
   second -> prev = head;
   second -> next = third;
   
   third -> prev = second;
   third -> next = fourth;
   
   fourth -> prev = third;
   fourth -> next = NULL;
   
   Node *newhead = insertatend(head,90);
   
   
   printdoublell(newhead);
     
    return 0;
    
}