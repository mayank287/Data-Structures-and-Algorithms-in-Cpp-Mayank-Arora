// Design a Ds That Support Special Operations
#include <iostream>
#include<map>
using namespace std;


map<int,string> m;
// Time o(logn)
void add(int price,string name){
    m[price] = name;
    
}
// Time o(logn)
string find(int price)
{
    auto res = m.find(price);
    if(res == m.end()){
        return "Not data Found";
    }
    else{
        return res -> second;
    }
}

// Time thetha(n)
void printSorted(){
    for(auto x : m){
        cout << x.second << " " << x.first <<  endl;
        
    }
}

// Time o(n)
void printGreaterSorted(int price){
    auto it  = m.upper_bound(price);
    while(it != m.end()){
        cout << it -> second << " " << it -> first << endl;
        it++;
     }
}

// Time o(n)
void printSmallerSorted(int price){
    auto it1 = m.lower_bound(price);
    for(auto it2 = m.begin(); it2 != it1; it2++){
        cout << it2 -> second << " " << it2 -> first << endl;
        
    }
}



int main()
{
    
 add(10,"Mayank");
 add(40,"shriya");
 
 add(20,"Parth");
 add(30,"Harsh");
   
   

  printSorted();
  printGreaterSorted(20);
  printSmallerSorted(20);


  cout <<  find(40);

   
}

 