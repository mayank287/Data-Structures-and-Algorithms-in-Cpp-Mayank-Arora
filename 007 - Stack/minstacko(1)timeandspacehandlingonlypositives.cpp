// Min Stack That Handles positives in o(1) Time and Space
// We use the logic that we push the min elements in negative form in stack
#include<bits/stdc++.h>
using namespace std;

struct Mystack{
  stack <int> st;
  int min;
  
  
  void push(int x){
      if(st.empty()){
          min = x;
          st.push(x);
                }
      else if(x<=min){
          st.push(x-min);
          min=x;
          
      }
      else{
          st.push(x);
          
      }
  }
  
  int pop(){
      int t = st.top();
      st.pop();
      if(t<=0){
          int res = min;
          min = min-t;
          return res;
          
      }
      else{
          return t;
      }
  }
  
  int top(){
      int t= st.top();
      return ((t<=0) ? min : t);
  }
    
    int getMin(){
        return min;
        
    }
    
    
};

int main()
{
  Mystack s;
 s.push(2);
 s.push(3);
 s.pop();
 cout << s.getMin();
 s.push(1);
 cout << s.getMin();
  
  

    return 0;
}
