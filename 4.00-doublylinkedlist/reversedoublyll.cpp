// Reverse Doubly LinkedList
// Question On Which i Spend Most Time  
// here we return temp -> prev not temp because temp point secondlast Node not Last Node 

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


 Node *reverseDLL(Node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node *temp = NULL;
    Node *curr = head;
    while(curr != NULL ){
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;
        curr = curr -> prev;
    }
    
    
    return temp -> prev;
    
    
    
    
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
   
   
   Node *newhead = reverseDLL(head);
   
   
   printdoublell(newhead);
  
    return 0;
   
};



// Geeks For Geeks Solution
Node* reverseDLL(Node * head)
{  if(head == NULL || head -> next == NULL) return head;


Node *temp = NULL;
Node *curr = head;

while(curr != NULL){
    temp = curr -> prev;
    curr -> prev = curr -> next;
    curr -> next = temp;
    curr = curr -> prev;
}

 return temp -> prev;
 
    
}












