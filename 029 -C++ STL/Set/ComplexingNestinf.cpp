// Complex Nesting Example 
#include <iostream>
#include<map> 

using namespace std;

int main()
{
  map<pair<pair<pair<int,int>,pair<int,int>>,pair<pair<int,int>,pair<int,int>>>,pair<pair<pair<int,int>,pair<int,int>>,pair<pair<int,int>,pair<int,int>>>> m;

 m.insert({{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}});
 
 
 for(auto x : m){
     cout << x.first.first.first.first<< " " << x.first.first.first.second << " " << x.first.first.second.first << " " << x.first.first.second.second << " " 
    <<  x.first.second.first.first << " " <<   x.first.second.first.second << " "<< x.first.second.second.first << " " << x.first.second.second.second << " "       
      << x.second.first.first.first << " " << x.second.first.first.second << " " << x.second.first.second.first<< " "  << x.second.first.second.second << " "
     << x.second.second.first.first << " " << x.second.second.first.second << " " << x.second.second.second.first << " " << x.second.second.second.second;
     
     
 }
 
 

    return 0;
}
