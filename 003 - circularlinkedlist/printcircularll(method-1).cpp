// Print Circular ll Using Method - 1


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



void printcircularll(Node *head){
    if(head == NULL) return ;
    
  cout << head -> data << " ";
  for(Node *curr = head -> next; curr != head; curr = curr -> next){
      cout << curr -> data << " ";
  };
  
};


int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next  = new Node(30);
    head -> next -> next-> next =  new Node(40);
    head -> next -> next-> next -> next =  head;
   
    printcircularll(head);
   
  
    return 0;
    
    
    
}







