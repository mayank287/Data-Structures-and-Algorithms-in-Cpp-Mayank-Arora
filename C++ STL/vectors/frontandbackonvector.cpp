// Front and Back function on vector
#include <iostream>
#include<vector>


using namespace std;

int main()
{
  vector<int> v= {10,5,20,30};
   v.pop_back();
  for(int x : v){
      cout << x << endl;
      
      
  }
  
  // front element print
  cout << v.front() << endl;
  
  // Front element give reference so we can change front element in vector
  // we can also use back
  cout << "front" << endl;
  v.front() = 90;
  cout << v.front() << endl;
  cout << v.back() << endl;
}
 