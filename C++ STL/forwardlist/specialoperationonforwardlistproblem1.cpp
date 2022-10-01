// problem where we need to implement custome insert, print and replace function



#include <iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

list<int> l;
 
void insert(int x){
    l.push_back(x);
    
}

void print(){
    for(int x : l ){
        cout << x << " ";
        cout << endl;
        
    }
}



void replace(int x, vector<int> &seq){
    auto it = find(l.begin(),l.end(),x);
    if(it == l.end()){
        cout << "No Element Found " << endl;
        return;
        
    }
    
    it = l.erase(it);
    l.insert(it,seq.begin(),seq.end());
    
}



int main()
{
   insert(10);
   insert(20);
   insert(30);
   
   
   vector<int> seq ={50,60,70};
   
   
   replace(40,seq);
   print();
   


   
    return 0;
}
