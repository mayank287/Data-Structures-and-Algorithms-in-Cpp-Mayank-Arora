// Merge Function on Vector in C++ STL
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   vector<int> v1 = {10,20,30};
   vector<int> v2 = {5,15,30};
   vector<int> v3(6);
   
   merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
   
   
   for(int x : v3){
       cout << x << " ";
       
   };
      

    return 0;
}
