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


Node *sortedinsert(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    };
    
    if(x < head -> data){
      temp -> next = head;
      return temp;
      
    };
    
    Node *curr = head;
    while(curr -> next != NULL && curr -> next -> data < x){
        curr = curr -> next;
        
    };
    
  temp -> next = curr -> next;
  curr ->  next = temp;
  
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
    
  Node *newhead = sortedinsert(head,50);
     
   rprintll(newhead);
   
    
    return 0;
    
    
}



// GFG Solution
class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
     Node *temp = new Node(data);
     
     if(head == NULL){
         return temp;
         
     };
     
     
     if(data < head -> data){
         temp -> next = head;
         return temp;
         
     };
     
       
       Node *curr = head;
       while(curr -> next != NULL && curr -> next -> data < data){
          curr = curr -> next; 
       };
       temp -> next = curr -> next;
       curr -> next = temp;
       
       return head;
       
    }
};