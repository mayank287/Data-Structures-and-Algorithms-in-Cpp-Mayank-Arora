// Insert at the End of Circular Linkedlist 
// It Take the Time of o(I) constant Time
// In This We Just The opp. Method of insert at begin we just swap the data

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


Node *insertatend(Node *head, int x){
Node *temp = new Node(x);


if(head == NULL){
    temp -> next = temp;
    return temp;
}
else{
    temp -> next = head -> next;
    head -> next = temp;
    int t = temp -> data;
    temp -> data = head -> data;
    head -> data = t;
};

return temp;

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
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next  = new Node(30);
    head -> next -> next-> next =  new Node(40);
    head -> next -> next-> next -> next =  new Node(70);
   head -> next -> next-> next -> next -> next = head;
    Node *newhead = insertatend(head,15);
    printcircularll(newhead);
    return 0;

}
