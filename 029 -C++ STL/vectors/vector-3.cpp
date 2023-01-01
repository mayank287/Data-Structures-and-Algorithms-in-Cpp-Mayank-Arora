// Vector Program - 3
#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int n=3, x=10;
   vector<int> v(n,x);
   for(auto it = v.begin(); it != v.end(); it++){
       cout << *it << endl;
   }
   
    return 0;
}
