// Delete From Begin of Doubly LinkedList 
// Time Complexity thetha(1)
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


Node *delbegin(Node *head){
 if(head == NULL) return NULL;
 
 if(head -> next == NULL){
     delete head;
     return NULL;
 }
 else{
    Node *temp = head;
    head = head -> next;
    head -> prev = NULL;
    delete temp;
    return head;
    
    
    
 };
 
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
   
   Node *newhead = delbegin(head);
   
   
   printdoublell(newhead);
     
    return 0;
    
}
