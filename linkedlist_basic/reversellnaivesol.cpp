#include <iostream>
#include<vector>

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
    vector <int> arr;
    for(Node *curr = head;curr != NULL; curr = curr -> next)
{
    arr.push_back(curr -> data);
};

for(Node *curr = head; curr != NULL ; curr = curr -> next){
  curr -> data = arr.back();
  arr.pop_back();
  
  
  
  
    
};


return head;


    
}
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
   
   reversell(head);
   
   
   rprintll(head);
   
    return 0;
   
    
}
