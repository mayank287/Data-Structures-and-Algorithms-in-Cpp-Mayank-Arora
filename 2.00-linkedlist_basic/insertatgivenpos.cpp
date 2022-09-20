// Insert at Given Position in Linkedlist

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


Node *insertatgivenpos(Node *head,int data,int pos)
{
   Node *temp = new Node(data);

  if(pos == 1){
    temp -> next = head;
    return temp;
    
  };
  
  Node *curr =head;
  for(int i = 1; i <= pos-2 && curr != NULL; i++){
    curr = curr -> next;  
  };
  
  if(curr == NULL){
      return head;
  };
  
  
  temp -> next = curr  -> next ;
  curr -> next = temp;
  return head;
  
  
  
  
  

 
  



};

void rprintll(Node *head){
 if(head == NULL){
     return;
 }
 
 cout << head -> data << " ";
 rprintll(head-> next);
 
 
};

int main(){
    Node *head = new Node(10);
   head -> next = new Node(20);
   head -> next -> next  = new Node(30);
   head -> next -> next-> next =  new Node(40);
    
  Node *newhead = insertatgivenpos(head,90,6);
     
   rprintll(newhead);
   
    
    return 0;
    
    
}




// Hacerank Solution
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode  *temp = new SinglyLinkedListNode(data);

  if(position == 1){
    temp -> next = llist;
    return temp;
    
  };
  
SinglyLinkedListNode *curr = llist;
  for(int i = 0; i <= position-2 && curr != NULL; i++){
    curr = curr -> next;  
  };
  
  if(curr == NULL){
      return llist;
  };
  
  
  temp -> next = curr  -> next ;
  curr -> next = temp;
  return llist;
  
  
}
