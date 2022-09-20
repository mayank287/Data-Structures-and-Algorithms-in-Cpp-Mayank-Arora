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




int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2  = new Node(30);
    head ->  next = temp1;
    temp1 -> next = temp2;
    
   cout << " 1st Node Data  " << " " <<  head -> data << "   First Node Pointer in The memory"  <<  " "  << head  ->  next << endl;
   cout << " 2nd Node Data  " << "  " << temp1 -> data << "   2nd Node Pointer in The memory" << "  " << temp1  ->  next << endl;
   cout << " 3rd Node Data  " << "  " << temp2 -> data << "  3rd Node Pointer in The memory" << " " << temp2  ->  next << endl;
   
   
   
    return 0;
    
    
    
}