// Erase on vector in c++ stl
// v.end() points to beyond last element

#include <iostream>
#include<vector>


using namespace std;

int main()
{
  vector<int> v= {10,5,20,30};
 v.erase(v.begin());
 for(int x:v){
     cout << x << endl;
 }

 v.erase(v.begin(),v.end() - 1);
 for(int x:v){
     cout << x << endl;
     
 }
return 0;
}



