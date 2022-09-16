// Nth Node from last  optimized (2- Pointer Approach)
// Time Complexity Linear o(n)
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

void printnthfromend(Node *head,int n){
  if(head == NULL) return;
  Node *first = head;
  for(int i = 0; i< n; i++){
      if(first == NULL) return;
      first=  first -> next;
      
  };
  
  Node *second = head;
  while(first != NULL){
    first = first -> next;
    second = second -> next;
       
      
  };
  
  
  cout << second -> data << endl;
  
       
};

void printll(Node *head){
   Node *curr = head;
   while(curr != NULL){
       cout << curr -> data << " ";
       curr = curr -> next;
   };
};

int main(){
    int n;
    Node *head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next  = new Node(30);
  head -> next -> next-> next =  new Node(40);
  head -> next -> next -> next -> next = new Node(70);
  
   
   
   
   
   
  cout << "Enter The Node Pos from last" << endl;
  cin >> n;
   

     printnthfromend(head,n);
  
    return 0;
    
    
    
};



// GFG Solution
int getNthFromLast(Node *head, int n)
{
   if(head == NULL) return -1;
 Node *first = head;
 for(int i = 0; i < n; i++){
 if(first == NULL) return -1;
 first = first -> next;
 };
 
 
 Node *second = head;
 while(first != NULL){
   first = first -> next;
   second = second -> next;
 };
 
 
 return second -> data;
 
}


