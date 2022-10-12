//  Design a Data Structure that supports the below
// operations:
// (2) insert()
// (3) delete()
// (4) search()
// (5) getFloor()
// (6) getCeiling()


// Time Complexity o(logn)

#include <iostream>
#include<set>
#include<limits.h>
using namespace std;

set<int> s;

void Insert(int x){
s.insert(x);
}



bool Search(int x){
    return (s.find(x) != s.end());
}

void Delete(int x){
    s.erase(x);
    
}


int getCeling(int x){
    auto it = s.lower_bound(x);
    if(it == s.end()){
        return INT_MAX;
    }   
    else{
        return *it;
        
    }
}

int getFloor(int x){
    auto it = s.lower_bound(x);
    if(it == s.begin()){
        if(*it == x) return *it;
        else return INT_MIN;
    }
    else{
        if(it != s.end() && *it == x) return *it;
        else{
            it--;
            return *it;
            
        }
    }
}


int main()
{
   Insert(10);
   Insert(20);
   Insert(30);
   Insert(40);
   Insert(400);
   Delete(400);
   cout << getCeling(35);
   
   cout <<  Search(400);

    return 0;
}
 