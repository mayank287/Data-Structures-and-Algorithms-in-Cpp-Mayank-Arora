
#include <iostream>
using namespace std;

struct Queue{
    int front,rear,size,cap;
    int *arr;
    
    Queue(int c){
        cap = c;
        front = 0;
        size = 0;
        rear = 0;
        arr = new int[c];
        
    }
    
    
    bool isFull(){
        return (size == cap);
        
    }
    
     bool isEmpty(){
         return size == 0;
     }
      
      
     void Enqueue(int value){
         if(isFull())
         {
             cout << "Queue is Full" << endl;
         }
         
         rear = (rear + 1 ) % cap;
         arr[rear] = value;
         size++;
         
         
         
     }  
     
      int dequeue(){
          if(isEmpty()){
              cout << "Queue is Empty" << endl;
               return -1;
               
          }
          
          int item = arr[front];
          front = (front + 1 ) % cap;
          size--;
           return item;
           
          
      }
     
     int getfront(){
        if(isEmpty()){
              cout << "Queue is Empty" << endl;
               return -1;
               
          };
          
          return arr[front];
          
     };
     
     int getrear()
     {
      
      if(isEmpty()){
              cout << "Queue is Empty" << endl;
               return -1;
               
          }   
          return arr[rear];
          
     }
    
    int getSize(){
        return size;
        
    }
  
    
};








int main()
{
   Queue q(5);
   q.Enqueue(10);
  cout << q.getrear() << endl;
 
   

    return 0;
}