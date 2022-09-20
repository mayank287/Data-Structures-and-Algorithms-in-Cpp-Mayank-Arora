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
   
   
   
   
   printdoublell(head);
  
    return 0;
   
}






