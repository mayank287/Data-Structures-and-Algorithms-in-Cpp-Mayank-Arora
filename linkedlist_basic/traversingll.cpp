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



void printll(Node *head){
   Node *curr = head;
   while(curr != NULL){
       cout << curr -> data << " ";
       curr = curr -> next;
   };
};


int main(){
    Node *head = new Node(10);
   head -> next = new Node(20);
   head -> next -> next  = new Node(30);
   head -> next -> next-> next =  new Node(40);
   
   
   printll(head);
   
  
    


   
   
   
    return 0;
    
    
    
}








// An Important Example for 
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



void printll(Node *head){
 
   while(head != NULL){
       cout << head -> data << " ";
       head = head -> next;
   };
};


int main(){
    Node *head = new Node(10);
   
   
   
   printll(head);
   printll(head);
   
   
  
    


   
   
   
    return 0;
    
    
    
}


// Here Output is 10 10 because here head pointer in printll() function  is copy from main function 
// head function and if we change printll() function head pointer then it change only head pointer of head function we
// we dono't change the head of main function