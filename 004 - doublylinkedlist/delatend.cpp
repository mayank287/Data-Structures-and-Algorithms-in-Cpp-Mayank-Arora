// Delete at End of Doubly Linked List 
// Time Complexity thetha(n)
//  -------------------------- Important Tip ---------------------------------------- //
// We can More Optimzed This Code using Thetha(1) By Maintaining Tail Pointer as Passing It As Argumnet 
// and We Get Rid Of Iteration But SomeTime This Creates Porblems We Need to Update Tail Pointer Accordingly



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


Node *delend(Node *head){
 if(head == NULL) return NULL;
 
 if(head -> next == NULL){
     delete head;
     return NULL;
 }

Node *curr = head;
while(curr -> next != NULL){
    curr  = curr  -> next;
}

curr -> prev -> next = NULL;
delete curr;
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
   
   Node *newhead = delend(head);
   
   
   printdoublell(newhead);
     
    return 0;
    
}
