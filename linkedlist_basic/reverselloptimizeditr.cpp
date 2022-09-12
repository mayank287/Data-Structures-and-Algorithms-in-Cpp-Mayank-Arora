// Time Complexity o(n) and Auxiliary Space Complexity is o(1)

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
   Node *curr = head;
   Node *prev = NULL;
   while(curr != NULL)
{
    Node *temp = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = temp;
    
};


 return prev;
 


    
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


// Leetcode Solution 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev = NULL;
      while(curr != NULL){
        ListNode *temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
          
      };  
        
        
        return prev;
        
    };
};


