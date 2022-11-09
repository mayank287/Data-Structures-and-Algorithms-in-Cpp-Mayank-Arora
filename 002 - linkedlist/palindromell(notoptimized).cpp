// Palindrome Linkedlist Using Stack Not Optimized Time thetha(n) and Auxillary Space Complexity thetha(n)
// This Solution Takes Extra Space 
#include <iostream>
#include<stack> 
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



bool checkpalindrome(Node *head){
  stack <int> st;
  
  
  for(Node *curr = head; curr != NULL; curr = curr  -> next  ){
    st.push(curr -> data);  
  };
  
  
  for(Node *curr = head; curr != NULL; curr = curr -> next){
    if(st.top() != curr -> data) {
        return false;
    };
        st.pop();
    
    
    
  };
 
    return true;
      
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
   head -> next -> next  = new Node(20);
   head -> next -> next-> next =  new Node(10);
   
  cout <<  checkpalindrome(head) << endl;
   
    return 0;
  
    
}



// LeetCode Solution
 bool isPalindrome(ListNode* head) {
        stack <int> st;
        
     for(ListNode *curr = head; curr != NULL; curr = curr -> next){
       st.push(curr -> val);
         
         
         
     };
        
        for(ListNode *curr = head; curr != NULL; curr = curr -> next){
            if(st.top() != curr -> val){
              return false;  
            };
            
            st.pop();
            
        }
        
        
        return true;
           
        
    }
};