// Next_permutation On Vector in C++ STL
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  
   vector<int> v = {1,2,3,5,4};
   
   
   next_permutation(v.begin(),v.end());
   
   
   for(int x : v ){
     cout << x << " ";
   }
   
   

    return 0;
}
