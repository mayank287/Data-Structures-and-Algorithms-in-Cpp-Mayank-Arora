// More Functions 
#include <iostream>
#include<unordered_map>

using namespace std;

int main()
{
   unordered_map<string,int> m;
   m["mayank" ] = 20;
   m["arora"] = 30;
   m.insert({"parth",25});
   
   // Traversing a find item
   auto it  = m.find("mayank");
   cout << it -> first<< endl;
   
   
   
   
   // Find in unordered_map
  if(m.find("mayank") != m.end()){
      cout << "Found" << endl;
  }
  else{
      cout << "Not Found" << endl;
  }
 
  
  // Traversing a unordered_map
  for(auto it = m.begin(); it != m.end(); it++){
      cout << it -> first << " " << it -> second << endl;
  }
    return 0;
}

 