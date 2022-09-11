#include <iostream>
using namespace std;
// Time Complexity is o(1) as we do only constant work

//  Creating Node Struct
struct Node{
    int data;
    Node *next;
    Node (int val){
        data = val;
        next = NULL;
        
        
    };
};

Node *insertathead(Node *head, int x){
  Node *temp = new Node(x);
  temp -> next = head;
  return temp;
  
};

void printll(Node *head){
    if(head == NULL){
        return;
    };
    
    
    cout <<  head -> data<< "  ";
    printll(head ->  next);
    
}
int main()
{
    Node *head = NULL;
    head = insertathead(head,30);
    head = insertathead(head,40);
    head = insertathead(head,50);
    head = insertathead(head,80);
    printll(head);
   
     
    return 0;
}



// Explanation of Code
// 1. Firstly We declare head pointer as Null 
// 2. Then We Create a Temp node and point temp ->  head Temp
// 3. then we point null head to temp to insert at front 

 