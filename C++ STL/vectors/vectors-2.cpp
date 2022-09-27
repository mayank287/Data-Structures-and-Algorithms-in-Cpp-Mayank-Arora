// Vectors Second Program
 
#include <iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v{10,5,20};
   // New Method To Print
  for(int x: v)
{
    cout << x << " ";
} 
// O/P:- 10 5 20


// For Changing The Element
for(int &x:v){
    x=6;
}

for(int x:v){
    cout << x << endl;
}
// O/P :- 6 6 6
    return 0;
}
