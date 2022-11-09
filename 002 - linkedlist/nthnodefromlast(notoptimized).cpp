// Nth Node from last Not optimized 


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

void printnthfromend(Node *head,int n){
    int len =0;
    for(Node *curr = head; curr != NULL; curr  = curr -> next){
        len++;
        
    };
    if(len < n ){
        cout << " Given nth is Out of scope" << endl;
        
    };
    
    Node *temp = head; 
    for(int i = 1; i < len- n + 1; i++)
    {
        temp = temp -> next;
           };
    
    
    cout << temp -> data << " ";
       
};

void printll(Node *head){
   Node *curr = head;
   while(curr != NULL){
       cout << curr -> data << " ";
       curr = curr -> next;
   };
};

int main(){
    int n;
    
    
    
    Node *head = new Node(10);
   head -> next = new Node(20);
   head -> next -> next  = new Node(30);
   head -> next -> next-> next =  new Node(40);
   
   
   
   cout << "Enter The Node Pos from last" << endl;
   cin >> n;
   
   
   
   
    printnthfromend(head,n);
  
    return 0;
    
    
    
};



// GFG Solution

int getNthFromLast(Node *head, int n)
{
int len = 0;
for(Node *curr =  head; curr != NULL; curr = curr -> next){
    len++;
};
if(len < n) return -1;
Node *temp = head;
for(int i=1; i< len-n+1;i++){
    temp = temp -> next;
    
}

return temp-> data;
   
}