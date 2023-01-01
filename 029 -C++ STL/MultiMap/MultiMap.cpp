// MultiMap in C++ STL
#include <iostream>
#include<map>

using namespace std;

int main()
{
   multimap<int,int> mp;
   mp.insert({10,20});
   mp.insert({5,20});
   mp.insert({10,25});
   for(auto x : mp){
       cout << x.first << " " << x.second  << " ";
       cout << endl;
   }

    return 0;
}
