// Reverse Linked List Using Recursion Method 1
// In This Method We start reversing from end node and moves to tail Node
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


Node *reversell(Node *head){


 if(head == NULL ||  head -> next == NULL){
   return head;
   
 };
// Here we Getting The head of part of linklist reverse 
Node *rest_head = reversell(head -> next);
// Here we Donot Have Access To rest tail to we access the rest tail using the head -> next of non reversing part 
Node *rest_tail = head -> next;
rest_tail -> next = head;

head -> next = NULL;
return rest_head;


    
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
    
    
    
}


// Leetcode solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        };
        
        
         ListNode *rest_head = reverseList(head -> next);
         ListNode *rest_tail = head -> next;
         rest_tail ->  next = head;
         head -> next = NULL;
        
        return rest_head;
        
    }
}
 
