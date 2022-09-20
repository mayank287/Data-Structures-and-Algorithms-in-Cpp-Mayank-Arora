// time Complexity o(n)
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
 
 
Node *insertattail(Node *head, int val){
    Node *temp = new Node(val);
    if(head == NULL){
        return temp;
        
    };
    Node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    };
     curr -> next  = temp;
     return head;
     
};


void printll(Node *head){
  if(head == NULL){
      return;
  };
  cout << head ->  data  << " ";
  printll(head -> next);
    
};





int main(){
  
  Node *head = NULL;
  head = insertattail(head,20);
  head = insertattail(head,40);
  head = insertattail(head,60);
  head = insertattail(head,70);
  head = insertattail(head,400);
  
  
  printll(head);
  
  return 0;
  
  
    
};

// Explanation of Code
// 1. we return the original head and if head == NULL then we modify the head at return temp
 


