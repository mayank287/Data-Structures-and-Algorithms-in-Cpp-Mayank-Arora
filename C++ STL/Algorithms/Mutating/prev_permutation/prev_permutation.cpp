// Prev Permutation in C++ STL
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  
   vector<int> v = {1,2,3};
   
   
   prev_permutation(v.begin(),v.end());
   
   
   for(int x : v ){
     cout << x << " ";
   }
   
   

    return 0;
}
