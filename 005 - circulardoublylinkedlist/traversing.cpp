// Traversing Circular Doubly LinkedList
 // Print Doubly Linkedlist 

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data =x;
        next =NULL;
        prev = NULL;
        
        
    };
    
};



void printcirculardoublell(Node *head){
    Node *curr =head;
    
  do{
      
      cout << curr -> data <<  " ";
      curr =  curr -> next;
      
      
  }while(curr!=head);
};


int main(){
    Node *head = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(20);
    Node *fourth= new Node(50);
   
   
   head -> prev = fourth;
   head -> next = second;
   
   
   second -> prev = head;
   second -> next = third;
   
   third -> prev = second;
   third -> next = fourth;
   
   fourth -> prev = third;
   fourth -> next = head;
   
   
   
   
   printcirculardoublell(head);
  
    return 0;
   
}





