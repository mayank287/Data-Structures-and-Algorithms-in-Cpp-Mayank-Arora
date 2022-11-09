// Reverse Linked List Using Recursion Method 2 
// In This Method We start reversing from tail node and moves to end Node

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

 Node *reversell(Node *curr, Node *prev = NULL){
     if(curr == NULL)  return prev;
   
   Node *temp = curr -> next;
   curr -> next = prev;
   return reversell(temp,curr);
   
   
   
     
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
   head -> next -> next-> next -> next=  new Node(60);
   head -> next -> next-> next -> next -> next=  new Node(70);
   
   
  
   
   
   Node *newHead =  reversell(head);
   rprintll(newHead);
  
    
    return 0;
    
    
    
};



// Leetcode Solution
class Solution {
public:
 ListNode *reversellhelper(ListNode *curr, ListNode *prev = NULL){
     if(curr == NULL)  return prev;
   
   ListNode *temp = curr -> next;
   curr -> next = prev;
   return reversellhelper(temp,curr);
      
 };
    
    ListNode* reverseList(ListNode* head) {
      
        
        return reversellhelper(head);
        
        
        
    };
};




