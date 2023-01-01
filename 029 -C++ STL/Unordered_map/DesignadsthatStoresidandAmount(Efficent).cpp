// Design A Ds That Stores id and Amout in o(1)  Time 


#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> m;



void Set(int id,int bal){
   m[id] = bal;
   
    
}
    
   
void get(int id){
  cout << m[id] << endl;
  
    
    
}   
    
int main()
{
    
    Set(1,20);
    Set(2,40);
    Set(4,60);
    Set(2,90);
    Set(1,150);
    get(2);
    get(1);
    get(4);
    Set(4,562);
    get(4);
    
    
 
    return 0;
}
