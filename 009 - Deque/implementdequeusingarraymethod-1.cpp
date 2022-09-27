// Simple Implementation of deque Using Array naive
// Approach using o(n) Time Complexity In Some operations

#include <iostream>
using namespace std;


struct Deque{
    int size, cap;
    int *arr;
    Deque (int c){
        cap = c;
        size = 0;
        arr = new int[c];
        
    }
    
    bool isFull(){
    return (size == cap);    
    
    }
    
    bool isEmpty(){
        return size == 0;
        
    }
    
    
    void insertRear(int x){
        if(isFull()){
            cout << "Deque is Full" << endl;
            return;
        }
        
        arr[size] = x;
        size++;
    }
    
    void deleteRear(){
        if(isEmpty()){
         cout << "Deque is Empty" << endl;             
                return;
            
        }
        
        size--;
        
    }
    
    int getRear(){
        if(isEmpty()){
            cout << "Deque is Empty" << endl;
            return -1;
        }
        else{
            return arr[size-1];
        }
        
        
    }
    
    
    void insertfront(int x){
        if(isFull()){
            cout << "Deque is Full" << endl;
            return;
            
        }
        
        for(int i = size-1; i >=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = x;
        size++;
        
    }
    
    void deleteFront(){
        if(isEmpty()){
            cout << "Deque is Empty" << endl;
            return;
        }
        for(int i = 0; i< size-1; i++){
            arr[i] = arr[i+1];
            
        }
        
        size--;
    }
    
    
    int getFront(){
        if(isEmpty()){
            cout << "Deque is Empty" << endl;
            return -1;
        }
        
        else{
          return  arr[0];
            
        }
    }
    
    int getSize(){
        return size;
    }
    
    
    
    
};





int main()
{
    Deque q(5);
    q.insertfront(10);
    q.insertRear(20);
    q.insertRear(30);
    q.insertRear(40);
    q.insertRear(50);
    q.insertRear(40);
    q.insertRear(40);
    q.insertRear(40);
    q.insertRear(40);
    q.deleteRear();
    q.deleteFront();
    q.deleteFront();
    q.deleteRear();
    q.deleteFront();
    cout << q.isEmpty() << endl;
    cout << q.getSize() << endl;
    cout << q.getSize() << endl;
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;

    return 0;
}