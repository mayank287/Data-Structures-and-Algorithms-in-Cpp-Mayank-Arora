// Insert at The Head Of Doubly LinkedList 


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
    Node *temp  = new Node(value);
    
    temp -> next = head;
    if(head != NULL){
        head -> prev = temp;
    }
    return temp;
    
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
   
   Node *newhead = insertatbegin(head,5);
   
   
   printdoublell(newhead);
     
    return 0;
    
}
