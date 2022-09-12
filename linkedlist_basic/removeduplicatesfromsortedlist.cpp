
#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node (int x){
    data = x;
    next= NULL;
  };
  
    
};



void RemoveDuplicate(Node *head){
    Node *curr = head;
    while(curr != NULL &&  curr -> next != NULL ){
        if(curr -> data == curr -> next -> data){
            Node *temp = curr -> next;
            curr -> next = curr -> next -> next;
            delete(temp);
            
        }
        else{
            curr = curr -> next;
            
        }
    };
};




void printll(Node *head){
    if(head == NULL){
        return;
    };
    
    
    cout << head -> data << " ";
    printll(head -> next);
    
};




int main(){
    Node *head = new Node(10);
    head ->  next = new Node(20);
    head -> next -> next  = new Node(20);
    head -> next -> next  -> next = new Node(30);
    head -> next -> next -> next -> next = new Node(30);
    head -> next -> next -> next -> next  -> next = new Node(30);
    head -> next -> next -> next ->next  -> next -> next = new Node(50);
  
  
      RemoveDuplicate(head);
      
    printll(head);
    
    
    return 0;
    
    
    
};


// Leetcode Solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while(curr != NULL && curr -> next != NULL){
            if(curr -> val == curr -> next -> val){
                ListNode *temp = curr -> next;
                curr -> next = curr -> next -> next;
                delete(temp);
            }
            else{
                curr =  curr -> next;
                
            }
        };
        
        return head;
    }
};
