// insert_fater and emplace_after forward list
#include <iostream>
#include<forward_list>
using namespace std;

int main()
{
   forward_list<int> l = {15,20,30};
   
    auto it = l.insert_after(l.begin(),10);
     it = l.insert_after(it,{7,7,7});
     it = l.emplace_after(it,40);
     it = l.erase_after(it,l.end());
     
     
        
   for(auto x : l){
       cout << x << endl;
       
   }
   

    return 0;
}
// O/P 15,10,7,7,7,40
