// Delete First Node in Circular Linkedlist (Naive-sol)
// Time Complexity thetha(1)
// We Basically copy the data of head -> next into head and delete the head -> next to make original Node 


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


Node *delhead(Node *head){
if(head == NULL) return NULL;
if(head -> next == NULL){
    delete head;
    return NULL;
}

head -> data = head -> next -> data;
Node *temp = head -> next;
head -> next = head -> next -> next;
delete temp;
return head;

};




void printcircularll(Node *head){
    if(head == NULL) return ;

  Node *curr = head;
  do{
      cout << curr -> data << " ";
      curr = curr -> next;
  }while(curr!=head);
};


int main(){
    Node *head = new Node(50);
    head -> next = new Node(50);
    head -> next -> next  = new Node(30);
    head -> next -> next-> next =  new Node(40);
    head -> next -> next-> next -> next =  new Node(70);
   head -> next -> next-> next -> next -> next = head;

   Node *newhead = delhead(head);



   printcircularll(newhead);


    return 0;



}
