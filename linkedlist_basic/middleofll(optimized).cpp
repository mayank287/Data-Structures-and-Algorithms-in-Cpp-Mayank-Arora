// Middle of LinkedList optimized approach using fast and slower pointer concept
// In This Fast Pointer Moves 2x then slow pinter


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
  if(head == NULL ) return;
  
Node *fast = head , *slow = head;

while(fast != NULL && fast -> next != NULL){
  slow = slow -> next;
  fast = fast -> next -> next;
  
  
  
    
};

cout << slow -> data << endl;

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
   
    int getMiddle(Node *head)
    {
        if(head == NULL) return 0;
         Node *fast = head,*slow = head;
         while(fast != NULL && fast -> next != NULL){
          slow = slow -> next;
          fast = fast -> next  -> next;
          
          
            
        };
        
        return slow -> data;
       
    };
};