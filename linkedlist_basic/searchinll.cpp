
#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
   Node(int val){
    data = val;
    next = NULL;
    
        
    };
};

int searchinll(Node *head, int val){
    int pos = 1;
    Node *curr = head;
    while(curr != NULL){
        if(curr ->  data == val){
            return pos;
            
        }
        else{
            pos++;
            curr = curr -> next;
        }
    }
     return -1;
     
    
    
};

int main()
{
      Node *head = new Node(10);
      head ->  next =  new Node(20);
      head -> next -> next = new Node(30);
      
    cout <<  searchinll(head,50) << endl;
      
          

    return 0;
}
