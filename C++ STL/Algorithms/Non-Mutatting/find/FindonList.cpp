// Find Function On List 
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    list<int> l = {5,10,12,8,7,3};
    auto it = find(l.begin(),l.end(),145);
    
    if(it == l.end()){
        cout << "Not Found" << endl;
        
    }
    else{
        cout << "Found" << endl;
    }
    
   
   

    return 0;
}
