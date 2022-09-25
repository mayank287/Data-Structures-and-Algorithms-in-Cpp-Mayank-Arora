// Traversing The Queue 
// Time Complexity o(n)

#include <iostream>

using namespace std;



struct Queue {
    int *arr;
    int qfront;
    int rear;
    int cap;
    int size;
    
    Queue(int c = 5)
    {
        cap = c;
        size = 0;
        qfront = 0;
        rear = 0;
        arr = new int[c];
        
    }
    
    bool isEmpty(){
        return qfront == rear;
        
    }
    
    
    
    void enqueue(int data){
        if(rear == cap) {
            cout << "Queue is full" << endl;
            
        }
        else{
            arr[rear++] = data;
          
            size++;
        }
    }
    
    
    
    
    int dequeue(){
        if(qfront ==  rear){
            cout << "Queue is Empty" << endl;
            return -1;
            
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            size--;
             if(qfront == rear){
                 qfront = 0;
                 rear = 0;
                 
             }
              return ans;
              
        }
    }
     
     
     
     int getfront(){
         if(qfront == rear){
             cout << "Queue  is Empty" << endl;
             return -1;
             
         }
         else{
             return arr[qfront];
             
         }
     }
     
     
     
     
     int getrear(){
          if(qfront == rear){
             cout << "Queue  is Empty" << endl;
             return -1;
             
         }
         else{
             return arr[rear-1];
             
         }
     } 
     
     bool isfull(){
         return rear == cap;
         
     }
    
    
    int getsize(){
        return size;
        
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);   
    
    while(!q.isEmpty())
    {
    cout << q.getfront() << endl;
    q.dequeue();
    }
    
    
    
    
    

    return 0;
}
// O/P :- 10 20 30 40