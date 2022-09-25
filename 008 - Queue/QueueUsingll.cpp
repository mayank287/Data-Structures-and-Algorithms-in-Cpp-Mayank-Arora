// Queue Implementing Using LinkedList 
// Time Complexity o(1);
#include<iostream>
using namespace std;


struct Node {
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
        
    }
    
 
};


struct Queue{
    Node *front,*rear;
    int size;
    
    Queue(){
        front = rear = NULL;
        size = 0;
    }
    
    void enQueue(int x){
        Node *temp = new Node(x);
        if(rear == NULL){
            front = rear = temp;
            size++;
            return;
            
        }
        rear -> next = temp;
        rear = temp;
        size++;
        
    }
    
    
    
    void deQueue(){
        if(front == NULL){
            return;
            
        }
        Node *temp = front;
        front = front -> next;
        size--;
        
        if(front == NULL){
            rear == NULL;
            
        }
        delete(temp);
        
    }
    
    int getSize(){
        return size;
        
    }
    
    int getFront(){
        return front -> data;
    }
    
    
    
    int getRear(){
        return rear -> data;
    }
    
    
    bool isEmpty(){
     return (front == NULL);
        
    }
    
    
    
    
    
};

int main(){
    
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    cout << q.isEmpty() << endl;
    
    
    
}





