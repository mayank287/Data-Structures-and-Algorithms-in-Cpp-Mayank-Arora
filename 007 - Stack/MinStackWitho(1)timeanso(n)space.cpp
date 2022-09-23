// Design A Stack That Supports Min Operation in o(1) Time and o(n) Space (Not Optimized)
#include <iostream>
#include <stack>

using namespace std;


struct MyStack{
    stack <int> ms;
    stack <int> as;
       
    void push(int value){
        
        
        if(ms.empty()){
            ms.push(value);
            as.push(value);
            return;
            
            
        }
               
        ms.push(value);
        
        if(as.top() >= ms.top()){
            as.push(value);
        }
        
        
    }
    
    void pop(){
        if(as.top() == ms.top()){
            as.pop();
        }
        ms.pop();
            }
    
    int top(){
        return ms.top();
        
    }
    
  int getMin(){
      return as.top();
      
  };    
    
    
};

int main()
{
   MyStack s;
   s.push(2);
   s.push(20);
   s.push(1);
   s.push(25);
   
  cout <<  s.getMin() << " ";
   
   s.pop();
   s.pop();
   
   cout << s.getMin() << " ";
   
   

    return 0;
}
