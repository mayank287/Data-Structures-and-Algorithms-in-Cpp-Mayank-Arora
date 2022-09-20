// Implement Stack Using LinkedList and Push and Pop Operation in o(1)
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int value){
        data = value;
        next = NULL;
        
    }
};

struct MyStack{
    Node *head;
    int sz;
    MyStack(){
        head = NULL;
        sz = 0;
    }
    
    void push(int x){
        Node *temp = new Node(x);
        temp -> next = head;
        head = temp;
        sz++;
        
        
    }
    
    int pop(){
        if(head == NULL){
            cout << "Stack In Empty" << endl;
            return INT_MIN;
            
        }
        int res = head -> data;
        Node *temp = head;
        head = head -> next;
        delete(temp);
        sz--;
        
        return res;
        
        
        
    }
    
    int Peak(){
        if(head == NULL) { 
            cout << "Stack is Empty" << endl;
            return INT_MIN;
    }
    return head -> data;
    
    }
    
    int size(){
        return sz;
        
    }
    
    bool isEmpty(){
        return head == NULL;
        
    }
    
};

int main()
{
 MyStack s;
 s.push(10);
 s.push(20);
 s.push(30);
 
 
 s.pop();
 s.pop();
 s.pop();
 cout << s.size() <<endl;
 cout << s.Peak() << endl;
  
  cout << s.isEmpty() << endl;
  
  
    return 0;
}


// GFG Solution(Somehow Different
//Function to push an integer into the stack.

void MyStack ::push(int x) 
{
   StackNode *temp = new StackNode(x);
   temp -> next  = top;
  top = temp;

}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;

    }
     StackNode *temp = top;
     int res = top -> data;
     top = top -> next;
     delete(temp);
     return res;
     
    
}