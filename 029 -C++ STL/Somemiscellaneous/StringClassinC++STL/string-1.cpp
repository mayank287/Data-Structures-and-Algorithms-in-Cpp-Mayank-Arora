// String Class First 
#include <iostream>

using namespace std;

int main()
{
  string str = "mayank";
  cout <<str.length() << endl;
  
  str = str + "arora";
  cout << str << endl;
   
 cout << str.substr(1,4) <<endl;
 
  int res = str.find("z");
  
  
  if(res == string::npos){
      cout << "Notfound";
  }
  else {
      cout << "found at" << res <<endl;
      
  }
  


    return 0;
}
 