// Design a Special Ds That Supports Duplicates
#include <iostream>
#include<map>
using namespace std;


multimap<int,string> m;

void add(int price,string name){
   m.insert({price,name});
   
    
}

void find(int price)
{
 auto ip = m.equal_range(price);
 for(auto it = ip.first; it != ip.second; it++){
     cout << it -> second << " " << it -> first << endl;
     
 }
}

void printSorted(){
    for(auto x : m){
        cout << x.second << " " << x.first <<  endl;
        
    }
}


void printGreaterSorted(int price){
    auto it  = m.upper_bound(price);
    while(it != m.end()){
        cout << it -> second << " " << it -> first << endl;
        it++;
     }
}


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
 add(20, "Raghuv");
 add(20,"Parth");
 add(30,"Harsh");
 add(30, "Shubham");
 
   
printGreaterSorted(20);


   

   
}

 