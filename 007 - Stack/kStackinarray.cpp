// K stack in Array
#include <iostream>
using namespace std;

struct Kstack{
    int *arr;
    int *top;
    int *next;
    int cap,k;
    int freetop;
    
    Kstack(int k1, int n)
    {
        k = k1, cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        
        for(int i = 0; i < k; i++)
        {
            next[i] = -1;
        }
        
        freetop = 0;
        
        for(int i = 0; i < cap - 1; i++)
        {
            next[i] = i + 1;
        }
        
        next[cap - 1] = -1;
    }
    
    bool isFull()
    {
    
        return (freetop == -1); 
    };
    bool isEmpty(int sn)
    {
        return (top[sn] == -1);
        
    };
    
    void push(int x, int sn)
    {
        if(isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        
        int i = freetop;
        freetop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    };
    
    int pop(int sn)
    {
        if(isEmpty(sn))
        {
            cout << "Stack UnderFlow" << endl;
        }
        
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
    };
};


int main()
{
   
  int k = 3,n = 10;
  Kstack ks(k,n);
  ks.push(15,2);
  ks.push(50,2);
  
  
  ks.push(10,1);
  ks.push(20,1);
  ks.push(30,1);
  
  ks.push(21,0);
  ks.push(1,0);
  
  
  cout << "pop element from stack 2 " << ks.pop(2) << endl;
  cout <<  "pop element fromt stack 1 "  << ks.pop(1) << endl;
  cout << "Pop element from stack 0 " << ks.pop(0) << endl;
    return   0;
}
