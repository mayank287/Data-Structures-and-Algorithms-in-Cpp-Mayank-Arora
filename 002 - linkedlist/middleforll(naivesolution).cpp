// Middle for linked List Naive Solution time complexity O(n) 
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

void printMiddle(Node *head){
if(head == NULL) return;

int len =0;
Node *curr;
for(curr = head; curr != NULL; curr = curr -> next){
   len++;
};

curr = head;
for(int i = 0; i < len/2; i++ ){
    curr = curr -> next;
      
};

cout << curr -> data <<endl;

};


int main(){
    int n;

    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next  = new Node(20);
    head -> next -> next-> next =  new Node(15);
    head -> next -> next-> next -> next =  new Node(25);
    head -> next -> next-> next -> next -> next=  new Node(30);
   





  printMiddle(head);

    return 0;

}


// GFG Solution

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head == NULL) return 0;
        
        int len = 0;
        Node *curr;
        
        for(curr = head; curr != NULL; curr = curr -> next ){
            len++;
        };
        
        curr = head;
        for(int i = 0; i < len/2; i++){
          curr  = curr  -> next;
          
        };
        
        
        return curr -> data;
        
        
       
    }
}