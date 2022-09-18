// Implement Stack Using Array Struct and 
// Push and Pop operations is Time Complexity of o(1)
#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    
    MyStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
        
    }
    
    void push(int x){
        if(top == cap - 1 ){
            cout << "Stack Overflow" << endl;
            
        }
        
        top++;
        arr[top] = x;
                
    }
    
    int pop(){
        if(top == -1){
            cout << "No Element In Stack" << endl;
            
        }
        int res = arr[top];
        top--;
        return res;
              
    }
    
    int peek(){
      if(top==-1){cout << "Stack Is Empty" << endl; return -1545;}
           
        return arr[top];  
      
    }
    
    int size(){
        return top + 1;
    }
    
    bool isEmpty(){
        return top == -1;
    }
  
};

int main()
{
   MyStack s(5);
  
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50); 

   cout << s.pop() << endl; 
   cout << s.pop() << endl; 
   cout << s.pop() << endl; 
   cout << s.pop() << endl; 
   cout << s.pop() << endl; 
  
  
  cout << s.isEmpty() << endl;
  
    return 0;
}

// GFG Solution



//Function to push an integer into the stack.
void MyStack :: push(int x)
{
   
    top++;
    arr[top] = x;
   
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
 if(top == -1) return -1;
 int res = arr[top];
 top--;
 return res;
 
 
 
}

