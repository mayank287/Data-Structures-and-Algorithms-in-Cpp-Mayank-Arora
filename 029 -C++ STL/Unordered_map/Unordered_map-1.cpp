// Unordered_map Program - 1
#include <iostream>
#include<unordered_map>

using namespace std;

int main()
{
   unordered_map<string,int> m;
   m["mayank" ] = 20;
   m["arora"] = 30;
   m.insert({"parth",25});
   
   for(auto x : m ){
       cout << x.first << " " << x.second << endl;
   }

    return 0;
}
