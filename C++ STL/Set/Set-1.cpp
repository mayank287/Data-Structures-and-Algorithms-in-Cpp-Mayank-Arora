// Set-Program-1
 #include <iostream>
 #include<set>
 
 using namespace std;
 
 
 int main(){
     set<int> s;
     s.insert(10);
     s.insert(5);
     s.insert(20);
     
     for(int x :s){
         cout <<x << " ";
         
     }
     return 0;
     
 }

 // O/P :- 5 10 20 


// To Reverse Order 
 #include <iostream>
 #include<set>
 
 using namespace std;
 
 
 int main(){
     set<int,greater<int>> s;
     s.insert(10);
     s.insert(5);
     s.insert(20);
     
     for(int x :s){
         cout <<x << " ";
         
     }
     return 0;
     
 } 

 // O/P  :- 20 10 5

 // insert,begin,end,rbegin,rend,find,clear,size,count,lower_bound,upper_bound  same as vector
 // count function only gives 1,0 because it only tells that appear