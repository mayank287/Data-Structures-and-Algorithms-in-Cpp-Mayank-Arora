// Insert at The Head of Circular Doubly LinkedList
// Print Doubly Linkedlist 

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




Node *insertatbegin(Node *head, int value){
  Node *temp = new Node(value);
  
  if(head ==  NULL){
      temp -> next = temp;
      temp -> prev = temp;
      return temp;
      
  }
  
  temp -> prev = head -> prev;
  temp -> next = head;
  head -> prev -> next  = temp;
  head -> prev = temp;
  return temp;
  
  
  
  
  
    
};

void printcirculardoublell(Node *head){
    Node *curr =head;
    
  do{
      
      cout << curr -> data <<  " ";
      curr =  curr -> next;
      
      
  }while(curr!=head);
};



int main(){
    Node *head = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(20);
    Node *fourth= new Node(50);
   
   
   head -> prev = fourth;
   head -> next = second;
   
   
   second -> prev = head;
   second -> next = third;
   
   third -> prev = second;
   third -> next = fourth;
   
   fourth -> prev = third;
   fourth -> next = head;
   
   
   Node *newhead = insertatbegin(head,20);
   
   
   printcirculardoublell(newhead);
  
    return 0;
   
}