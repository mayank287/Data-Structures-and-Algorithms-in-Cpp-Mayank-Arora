// Passing Vectors to Functions
// Case 1:- 
// Without paasing as Reference

#include <iostream>
#include<vector>

using namespace std;

void func(vector<int> v){
    v.push_back(10);
    v.push_back(20);
}


int main()
{
   
  vector<int> v = {5,7,8};
  fun(v);
  for(auto x:v){
      cout << x << endl;
      
  };
  
  
  return 0;
   
}


// O/P 5,7,8 as it not change original vector


// Case 2: With Reference
#include <iostream>
#include<vector>

using namespace std;

void func(vector<int> &v){
    v.push_back(10);
    v.push_back(20);
}





int main()
{
   
  vector<int> v = {5,7,8};
  func(v);
  for(auto x:v){
      cout << x << endl;
      
  };
  
  
  return 0;
   
}


// O/P:5,7,8,10,15


// Case 3: To Increase The efficiency so use const and they also not modified the vector 
// we pass reference as if not pass reference it is costly operation 

#include <iostream>
#include<vector>

using namespace std;

void func(const vector<int> &v){
     for(auto x:v){
      cout << x << endl;
      
  };
}


int main()
{
   
  vector<int> v = {5,7,8};
  func(v);

  
   
  return 0;
   
}

// In The End We ensure we traverse the vector efficiently we use reference using &

// for example
for(auto &x:v){

}
